#include <stdio.h>
int main()
{
    int n,m,j,sum=1;
    while(~scanf("%d",&n))
    {
        for (m=1;m<=n;m++)
        {
            scanf("%d",&j);
            if(j%2!=0)
                sum*=j;
        }
        printf("%d\n",sum);
        sum=1;
    }
    return 0;
}
