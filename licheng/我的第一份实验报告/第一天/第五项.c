#include <stdio.h>
int fun (int m)
{
    int a,b,k=0,sum=0;
    for(a=2;a<m;a++)
    {
        k=0;
        for(b=2;b<a;b++)
        {
            if(a%b==0)
                k++;
        }
        if(k==0)
            sum++;
    }
    return sum;
}
int main()
{
    int m,n;
    scanf("%d",&m);
    if(m>=3)
    {
        n=fun(m);
        printf("%d",n);
    }
    return 0;
}
