#include <stdio.h>
#include <math.h>
int main()
{
    int a,b=1,c;
    while(~scanf("%d",&a))
    {
        for(c=1;c<a;c++)
        {
            b=(b+1)*2;
        }
        printf("%d\n",b);
        b=1;
    }
}
