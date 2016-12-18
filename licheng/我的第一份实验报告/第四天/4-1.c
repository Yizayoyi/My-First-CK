#include <stdio.h>
int main()
{
    int i,j,a[10],k,min;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        min=a[i];
        k=i;
        for(j=i+1;j<10;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                k=j;
            }
        }
        a[k]=a[i];
        a[i]=min;
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
