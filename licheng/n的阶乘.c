#include <stdio.h>
int main()
{
    int a,n=1,s;
    while (~scanf("%d",&a))
    {
        for (s=2;s<=a;s++)
        {
            n*=s;
        }
        printf("%d",n);
        n=1;
    }
    return 0;
}
