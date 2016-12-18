#include <stdio.h>
int main()
{
    int m,n,i,j=0,a[1000],k=0;
    while(~scanf("%d",&m)&&m!=0)
    {
        k=0;
        for(n=0;n<m;n++)
            scanf("%d",&a[n]);
        i=a[0];
        for(n=0;n<m;n++)
        {
            if(i>a[n])
            {
                i=a[n];
                j=n;
            }
        }
        a[j]=a[0];
        a[0]=i;
        for(n=0;n<m;n++)
        {
            k++;
            if(k!=(m))
                printf("%d ",a[n]);
            else
                printf("%d\n",a[n]);
        }
    }
}
