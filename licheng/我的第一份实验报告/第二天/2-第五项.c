#include <stdio.h>
int main()
{
    int k,i;
    float sum=1;
    scanf("%d",&k);
    if(k%2!=0&&k<9)
    {
        for(i=1;i<=k;i++)
        {
            sum=sum*i;
            if(i%2!=0)
                printf("%.5f ",sum);
        }
    }
}
