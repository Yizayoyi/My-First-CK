#include <stdio.h>
int main()
{
    int sum,a,n,i;
    scanf("%d %d",&a,&n);
    int f=a;
    for(i=1;i<n;i++)
    {
        f=f*10+a;
        sum=f;
    }
    while(f!=0)
    {
        f=f/10;
        sum=sum-f;
    }
    printf("%d",sum);
}
