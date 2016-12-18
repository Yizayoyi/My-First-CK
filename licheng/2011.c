#include <stdio.h>
int main()
{
    int m,n,i,a;
    double j=0;
    while(~scanf("%d",&m))
    {
        for (i=1;i<=m;i++)
        {
            scanf("%d",&n);
            for (a=1;a<=n;a++)
            {
                if(a%2==0)
                    j=(a*j-1)/a;
                if(a%2!=0)
                    j=(a*j+1)/a;

            }
            printf ("%.2lf\n",j);
            j=0;
        }
    }
    return 0;
}
