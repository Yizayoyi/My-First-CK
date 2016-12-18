#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int f[1005][1005], l, dp[1005];
char s[1005];
int min(int num1, int num2)
{
    return num1<num2?num1:num2;
}
void init()
{
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= l; ++i)//逐个两端向外枚举
        for(int j = 0; i-j>0 && i+j<=l && s[i-j]==s[i+j]; ++j)//奇数大小的串
            f[i-j][i+j] = 1;
    for(int i = 1; i < l; ++i)
        for(int j = 0; i-j>0 && i+j+1<=l && s[i-j]==s[i+j+1]; ++j)//偶数
            f[i-j][i+j+1] = 1;
}
int main()
{
    while(~scanf("%s", s+1))
    {
        l = strlen(s+1);
        init();
        //dp[0] = 0;
        dp[1] = 1;
        for(int j = 2; j <= l; ++j)
        {
            dp[j] = j;
            for(int i = 1; i <= j; ++i)
                if(f[i][j])
                    dp[j]=min(dp[j], dp[i-1] + 1);
        }
        printf("%d\n", dp[l]);
    }
    return 0;
}
