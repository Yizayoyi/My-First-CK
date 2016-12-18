#include <stdio.h>
int main()
{
    int n,a,b,c,i;
    double j;
    while (~scanf("%d",&n)&&n!=0&&n<100)
    {
        a=0;b=0;c=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&j);
            if(j>0)
                a++;
            if(j==0)
                b++;
            if(j<0)
                c++;
        }
        printf ("%d %d %d\n",c,b,a);
    }
    return 0;
}
