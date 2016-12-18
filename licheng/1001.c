#include <stdio.h>
int main()
{
    int k,n;
    long sum=0;
    while(~scanf("%d",&n))
    {
        for(k=1;k<=n;k++)
        {
            sum+=k;
        }
        printf("%ld",sum);
        printf("\n\n");
        sum=0;
    }
    return 0;
}
