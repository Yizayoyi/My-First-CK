#include <stdio.h>
int fun (int m)
{
    int c=1,a;
    while(m!=0)
    {
        a=m%10;
        m=m/10;
        c=c*a;
    }
    return c;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=fun(a);
    printf("%d",b);
    return 0;
}
