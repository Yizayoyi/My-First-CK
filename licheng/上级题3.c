#include <stdio.h>
int main()
{
    int i,j,n,m,p,q;
    scanf("%d",&n);
    if(n%2!=0)
    {
        p=n/2;
        q=1;
        for(i=0;i<(n/2+1);i++)
        {
            for(j=p;j>0;j--)
                printf(" ");
            for(m=q;m>0;m--)
                printf("* ");
            p--;
            q++;
            printf("\n");
        }
        p=n/2;
        q=1;
        for(i=0;i<n/2;i++)
        {
            for(j=q;j>0;j--)
                printf(" ");
            for(m=p;m>0;m--)
                printf("* ");
            p--;
            q++;
            printf("\n");
        }
    }
}
