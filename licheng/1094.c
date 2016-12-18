#include <stdio.h>
int main()
{
    int n,i,j,sum=0;
    while (~scanf("%d",&n))
    {
        sum=0;
        for (i=1;i<=n;i++)
        {
            scanf("%d",&j);
            sum=sum+j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
