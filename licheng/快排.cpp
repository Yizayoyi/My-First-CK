#include <iostream>
using namespace std;
void quick (int a[],int low,int high)
{
    int i=low,j=high,x=a[i];
    if(low<high)
    {
        while(i<j)
        {
            while((a[j]>=x&&(i<j)))
            {
                j--;
            }
            a[i]=a[j];
            while((a[j]<x&&(i<j)))
            {
                i++;
            }
            a[j]=a[i];
        }
        a[i]=x;
        quick (a,low,i-1);
        quick(a,j+1,high);
    }
}
int main()
{
    int *a,n,i;
    while (cin>>n)
    {
        a=new int [n];
        for(i=0;i<n;i++)
            cin>>a[i];
        quick (a,0,n-1);
        for(i=0;i<n;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
