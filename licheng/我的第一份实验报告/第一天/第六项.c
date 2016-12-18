#include <stdio.h>
int fun (int lim, int aa[1000] )
{
    int i;
    for(i=0;i<1000;i++)
    {
        int a,b,k=0,sum=0;
        for(a=2;a<lim;a++)
        {
            k=0;
            for(b=2;b<a;b++)
            {
                if(a%b==0)
                    k++;
            }
            if(k==0)
            {
                sum++;
                aa[i]=a;
            }
            return sum;
        }
    }
}
int main()
{
        int m,n,a[1000];
    scanf("%d",&m);
    if(m>=3)
    {
        n=fun(m,a[1000]);
        printf("%d",n);
    }
    return 0;
}
