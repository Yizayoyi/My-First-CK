#include<stdio.h>

int main()
{
    int a[5][5],i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf("%d",a[i][j]=i);
            }
            else

                printf("%d",a[i][j]=j);

        }
        printf("\n");
    }
    return 0;
}
