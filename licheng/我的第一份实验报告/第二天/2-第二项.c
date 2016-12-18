#include <stdio.h>
unsigned fun (unsigned w)
{
    int m,n,sum,j;
    j=w;
    while(w!=0)
    {
        w=w/10;
        sum++;
    }
    w=j;
    for(m=0;m<1;m++)//sum-2也是一种方法
        w=w/10;
    n=w%10;
    return n;
}
int main()
{
    unsigned w;
    int n;
    scanf("%u",&w);
    n=fun(w);
    printf("%d",n);
    return 0;
}
