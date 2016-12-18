#include <iostream>
#include <string.h>
using namespace std;
#define q 1010
char a[q], b[q];
int dp[q][q];

int main()
{
    while(cin>>a>>b)
    {
        int a1=strlen(a);
        int b1=strlen(b);
        for(int i=0;i<a1;i++)//把第一列变成0
            dp[i][0]=0;
        for(int i=1;i<b1;i++)//把第一行变成0
            dp[0][i]=0;
        for(int i=1;i<a1+1;i++)
            for(int j=1;j<b1+1;j++)
            {
                if(a[i-1]==b[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                {
                    dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
                }
            }
            cout<<dp[a1][b1]<<endl;
    }
    return 0;
}

