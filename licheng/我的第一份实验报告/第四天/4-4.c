#include <stdio.h>
#include <string.h>
int fun (char *a,char *b)
{
    int k=0,i=0,j,n;
    for(j=0;j<strlen(a);j++)
    {
        if(b[i]==a[j])
        {
            j++;
            n=j;
            for(i=1;i<strlen(b);i++)
            {
                if(b[i]==a[j])
                    j++;
                else
                {
                    j=n;
                    i=0;
                    break;
                }
            }
            if(i==strlen(b))
            {
                k++;
                j=n+strlen(b)-1;
                i=0;
            }
        }
    }
    return k;
}
int main()
{
    int k;
    char a[100],b[10];
    gets(a);
    gets(b);
    k=fun(a,b);
    printf("%d",k);
    return 0;
}
