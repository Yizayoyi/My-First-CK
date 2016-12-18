#include <stdio.h>
int main ()
{
    int n,m,i,j,a,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for (j=1;j<=m;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        sum=0;
    }

}
