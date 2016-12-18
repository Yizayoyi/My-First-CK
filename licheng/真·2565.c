#include <stdio.h>
int main()
{
    int t,m,n,i,j,a,k=0,c1=0,b=0;
    char ch='x';
    while(~scanf("%d",&t))
    {
        for(a=0;a<t;a++)
        {
            scanf("%d",&n);
            int c2=n-2;
            if(n%2==0)
                return 0;
            if(n%2!=0)
            {
                for(i=1;i<=n;i++)
                {
                    for(k=0;k<c1;k++)
                        printf(' ');
                    printf("%c",ch);
                    for(b=0;b<c2;b++)
                        printf(' ');
                    if(i!=(n+2)/2)
                        printf("%c",ch);
                    printf("\n");
                    if(i<=(n/2))
                    {
                        c1++;
                        c2=c2-2;
                    }
                    if(i==(n+2)/2)
                    {
                        c1++;
                        c2=c2-2;
                    }
                    if(i=>(n/2))
                    {
                        c1--;
                        c2+=2;
                    }
                }
            }
        }
    }
    return 0;
}
