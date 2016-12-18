#include <stdio.h>
int main()
{
    int n,m=0;
    while(~scanf("%d",&n)&&n!=0&&1<=n&&n<=10000)
    {
        if (n==1)
            m=0;
        while (n!=1)
        {
            if(n%2==0)
                n=n/2;
            else
                n=(3*n+1)/2;
            m++;
        }
        printf ("%d\n",m);
        m=0;
    }
    return 0;
}
