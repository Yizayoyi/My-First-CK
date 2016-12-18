#include <stdio.h>
int main()
{
    int a[100][100],b,c,i,j,m=1,n;
    scanf("%d",&n);
    for(b=0;b<n;b++)
    {
        for(c=0;c<=b;c++)
        {
            if(c==0||c==(n-1))
                a[b][c]=1;
            else
                a[b][c]=a[b-1][c-1]+a[b-1][c];
        }
    }
    for(b=0;b<n;b++)
    {
        for(j=n-b;j>=0;j--)
            printf(" ");
        for(c=0;c<=b;c++)
            printf("%d ",a[b][c]);
        printf("\n");
    }
}
