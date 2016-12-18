#include <iostream>
#include <iomanip>   //控制输出流
using namespace std;
int main()
{
    int **a, n1, n2, sum = 1;
    while(cin>>n1>>n2 && n1 >1 && n2 >1)
    {
        a = new int*[n1];     //动态开数组
        for(int i = 0; i < n1; i++)
            a[i] = new int [n2];
        for(int i = 0; i < (n1>n2?(n2+1)/2:(n1+1)/2); i++)
        {
            for(int j = i; j < n2-i; j++)    //向右
                a[i][j] = sum++;
            for(int j = i+1; j < n1-i; j++)   //向下
                a[j][n2-1-i] = sum++;
            if(i >= n1/2 || i >= n2/2) break;
            for(int j = n2-i-2; j >= i; j--)
                a[n1-i-1][j] = sum++;
            for(int j = n1-i-2; j > i; j--)
                a[j][i] = sum++;
        }
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < n2; j++)
                cout <<left<<setw(5)<<a[i][j];
            cout <<endl;
        }
        for(int i = 0; i < n2; i++)
            delete [] a[i];
        delete []a;
        sum = 1;
    }
    return 0;
}

