#include <stdio.h>

int powerMod(int a, int b, int c)
{
    int ans = 1;
    a = a % c;
    while(b>0)
    {
        if(b % 2 == 1)
            ans = (ans * a) % c;
        b = b/2;
        a = (a * a) % c;
    }
    return ans;
}
int main()
{
    int a, b, c, ans;
    scanf("%d%d%d",&a, &b, &c);
    ans=powerMod(a, b, c);
    printf("%d",ans);
    return 0;
}
