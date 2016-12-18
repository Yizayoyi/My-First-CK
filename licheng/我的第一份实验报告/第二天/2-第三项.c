/*#include <stdio.h>
#include <math.h>
long fun (long s)
{
    int t=0,m,n=0,i,j;
    while(s!=0)
    {
        m=s%10;
        s=s/10;
        if(m%2==0)
        {
            t=t+m*pow(10,n);
            n++;
        }
    }
    return t;
}
int main()
{
    long s;
    int t;
    scanf("%ld",&s);
    t=fun(s);
    printf("%d",t);
    return 0;
}*/





#include<stdio.h>
long fun(long s)
{
    int a=0;
    long z=s,m=0;
    while (s!=0)
    {
        s=s/10;
        a++;
    }
    int i,j,k=10,n=10;
    for(i=1;i<=a;i++)
    {
        j=z%n;
        if(i%2==0)
        {
            m=j*(k/10)+m;
            k*=10;
        }
        z=z/10;
    }
    return m;
}

int main()
{
    long m,n;
    scanf("%ld",&n);
    m=fun(n);
    printf("%ld",m);
    return 0;
}
