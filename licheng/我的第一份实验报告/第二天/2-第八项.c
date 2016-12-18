#include <stdio.h>
float fun (float eps)
{
    int i=1,j;
    float s=1,e=1;
    while((1/s)>eps)
    {
        s=1;
        for(j=1;j<=i;j++)
            s*=j;
        i++;
        e+=1/s;
    }
    return e;
}
int main()
{
    float eps,e;
    scanf("%f",&eps);
    e=fun(eps);
    printf("%f",e);
    return 0;
}
