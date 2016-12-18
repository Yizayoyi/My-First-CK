#include <stdio.h>

#define pi 3.1415927

int main( )
{
    double r,v;
    while(~scanf("%lf",&r)&&r>0)
    {
        v = (4 * pi * ( r * r * r ) ) / 3;
        printf("%0.3lf\n",v);
    }
    return 0;
}
