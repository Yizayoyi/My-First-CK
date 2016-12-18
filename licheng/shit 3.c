#include <stdio.h>
int main()
{
    int n,sum=0,max=0,i;
    while(~scanf("%d",&n)&&n>0)
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<=0)
                sum=0;
            if(sum>max)
                max=sum;
        }
        printf("%d\n",max);
        sum=0,max=0;
    }
    return 0;
}
