#include <stdio.h>
int main()
{
    int n,sum=0,max=0,i,k=0,f1,f2;
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
            {
                sum=0;
                k=0;
            }
            if(sum>max)
            {
                max=sum;
                f1=a[i-k];
                f2=a[i];
                k++;
            }
            if(max>sum>0)
                k++;
        }
        if(k>0)
            printf("%d %d %d\n",max,f1,f2);
        if(k==0)
            printf("%d %d %d\n",max,max,max);
        sum=0,max=0,k=0;
    }
    return 0;
}
