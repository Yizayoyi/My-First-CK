#include <stdio.h>
#include <math.h>
double fun (int m,int n)
{
    double c;
    c=sqrt(m)+sqrt(n);
    return c;
}
int main()
{
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    c=fun(a,b);
    printf("%lf",c);
    return 0;
}
