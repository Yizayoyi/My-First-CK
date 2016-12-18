#include<stdio.h>

int main()
{
    int a[5][5],i,j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
