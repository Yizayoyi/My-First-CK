#include <stdio.h>
int main()
{
    long m,n,sum1=0,sum2=0,j,i;
    while(~scanf("%ld %ld",&n,&m))
    {
        if(n>m)
        {
            j=n;
            n=m;
            m=j;
        }
            sum1=0,sum2=0;
        for (i=n;i<=m;i++)
        {
            if(i%2==0)
                sum1+=i*i;
            if(i%2!=0)
                sum2+=i*i*i;
        }
        printf("%ld %ld\n",sum1,sum2);
    }
    return 0;
}
