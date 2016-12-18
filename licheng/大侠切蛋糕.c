#include <stdio.h>
int main()
{
    int n,sum;
    while(~scanf("%d",&n))
    {
        sum=(n*n*n+5*n+6)/6;
        printf("%d\n",sum);
    }
    return 0;
}
