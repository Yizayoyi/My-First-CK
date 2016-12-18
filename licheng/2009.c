#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double sum,m,n;
    while (~scanf("%lf %lf",&m,&n))
    {
        sum=m;
        for(i=1;i<n;i++)
        {
            m=sqrt(m);
            sum+=m;
        }
        printf("%0.2lf\n",sum);
    }
    return 0;
}
