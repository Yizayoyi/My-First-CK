#include <stdio.h>
int main()
{
    double a,b;
    while(~scanf("%lf",&a))
    {
        if(a>=0)
        {
            b=a;
            printf("%0.2lf",b);
        }
        if(a<0)
        {
            b=-a;
            printf("%0.2lf",b);
        }
        printf("\n");
    }
    return 0;
}
