#include<stdio.h>
#include<math.h>
int main()
{
    int n, b, c, d=0, sum=0;
    while(~scanf("%d", &n))
    {
        for(b=2;b<=n;b++)
        {
            for(c=2;c<=sqrt(b);c++)
            {
                if(b%c==0)
                d++;
            }
            if(d==0)
            {
                sum+=b;
            }
            d=0;
        }
    printf("%d\n",sum);
    sum=0;
    }
    return 0;
}
