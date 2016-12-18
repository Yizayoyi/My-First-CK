#include <stdio.h>
int main()
{
    int n,m,i,*j,sum=0,max,av;
    while(~scanf("%d",&n)&&n!=0)
    {
        j=new int [n];
        for (i=0;i<n;i++)
            scanf("%d",&j[i]);
        for(i=0;i<n;i++)
        {
            sum+=j[i];
            if(j[i]>=j[i+1])
            {
                max=sum;
                sum=0;
            }
        }
        printf("%d\n",max);
        sum=0;
    }
    return 0;
}
