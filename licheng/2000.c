#include <stdio.h>
int main()
{
    char c[3];
    int a[3],n,j,i;
    while (~scanf("%s",c))
    {
        a[0]=c[0];
        a[1]=c[1];
        a[2]=c[2];
        for (i=0;i<=2;i++){
            for(n=0;n<=2-i;n++)
            {
                if(a[n]>a[n+1])
                {
                    j=a[n];
                    a[n]=a[n+1];
                    a[n+1]=j;
                }
            }
        }
        c[0]=a[0];
        c[1]=a[1];
        c[2]=a[2];
        printf("%c %c %c\n",c[0],c[1],c[2]);
    }
    return 0;
}
