#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0,s;
    while (~scanf("%d",&n))
    {
        for (s=1;s<=n;s++)
        {
        scanf("%d",&m);
        for (i=1;i<=m;i++)
        {
            scanf("%d",&j);
            sum=sum+j;
        }
        printf("%d\n",sum);
        printf("\n");
        sum=0;
        }
    }
    return 0;
}
