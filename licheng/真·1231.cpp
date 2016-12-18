#include <stdio.h>
int main()
{
    int n,sum=0,max=0,i,f1,f2,k=0;
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
                {
                    k++;
                    max=sum;
                    f1=a[i-k];
                    f2=a[i];
                }
        }
        printf("%d %d %d\n",max,f1,f2);
        sum=0,max=0,k=0;
    }
    return 0;
}
