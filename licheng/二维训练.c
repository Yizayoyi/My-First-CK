#include <stdio.h>
#include <string.h>
int main()
{
    int a,i,j;
    char ch;
    char c[1000][1000];
    while (~scanf("%d %c",&a,&ch))
    {
        for(i=0;i<a;i++)
        {
            for (j=0;j<a;j++)
            {
                if(i==0||i==a-1||j==0||j==a-1)
                    c[i][j]=ch;
                else
                    c[i][j]=' ';
            }
        }
            for(j=0;j<a;j++)
                printf("%s\n",c[j]);
    }
    return 0;
}
