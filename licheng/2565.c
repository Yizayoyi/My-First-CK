#include <stdio.h>
int main()
{
    int n,i,j,t,a;
    char c[1000][1000];
    while(~scanf("%d",&n))
    {
        for(t=0;t<n;t++)
        {
            scanf("%d",&j);
            if(j%2==0)
                return 0;
            if(j%2!=0)
            {
                for(i=0;i<j;i++)
                {
                    for(a=0;a<j;a++)
                    {
                        if(i==a||i+a==j-1)
                            c[i][a]='x';
                        else
                            c[i][a]=' ';
                    }
                }
            }
            for(i=0;i<j;i++)
                printf("%s\n",c[i]);
                printf("\n");
        }
    }
    return 0;
}
