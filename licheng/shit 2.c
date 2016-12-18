#include <stdio.h>
int main()
{
    int b,c,m,n,k=0;
    while (~scanf("%d",&n))
    {
        int a[n];
        for(m=0;m<n;m++)
        {
            scanf("%d",&a[m]);
        }
        for(m=0;m<n;m++)
        {
            for(b=0;b<n-m-1;b++)
            {
                if (a[b]<a[b+1])
                {
                    c=a[b];
                    a[b]=a[b+1];
                    a[b+1]=c;
                }
            }
        }
        for (m=0;m<n;m++)
        {
            k++;
            if(k==1)
                printf("%d",a[m]);
            else
                printf(" %d",a[m]);
        }
        k=0;
        printf("\n");
    }
    return 0;
}
