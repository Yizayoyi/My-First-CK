#include <stdio.h>
#include <string.h>
char fun (char *a)
{
    int i,k,j=0,n;
    for(i=0;i<strlen(a);i++)
    {
        k=a[i];
        if(k>j)
        {
            j=k;
            n=i;
        }
    }
    k=a[n];
    for(i=n-1;i>=0;i--)
        a[i+1]=a[i];
    a[0]=k;
}
int main()
{
    char a[100];
    int i;
    gets(a);
    fun(a);
    for(i=0;i<strlen(a);i++)
        printf("%c",a[i]);
}
