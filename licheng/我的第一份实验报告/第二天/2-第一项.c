#include <stdio.h>
float fun(float m,int x)
{
    int i,k,j;
    for(i=0;i<x;i++)
        m=m*10;
    k=m*10;
    j=m;
    if(k%10>=5&&k%10<=9)
    {
        j=j+1;
        m=j;
        for(i=0;i<x;i++)
            m=m/10;
    }
    if(k%10<=4&&k%10>=0)
    {
        m=j;
        for(i=0;i<x;i++)
            m=m/10;
    }
    return m;
}
int main()
{
    int x;
    float m,n;
    scanf("%f %d",&m,&x);
    n=fun(m,x);
    printf("%f",n);
    return 0;
}
