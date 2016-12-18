#include <stdio.h>
#include <string.h>
char fun (char *a)
{
    int i,j;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            for(j=i;j<strlen(a);j++)
                a[j]=a[j+1];
        }
    }
}
int main()
{
    int i;
    char a[1000];
    gets(a);
    fun(a);
    for(i=0;i<strlen(a);i++)
        printf("%c",a[i]);
    return 0;
}




/*#include<stdio.h>
#include<string.h>

char fun(char a[100] )
{
    int i, j, k=0;
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if(a[i]==32)
        {
            for(j=i;j<k;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    return 0;
}
int main()
{
    char a[100];
    int k;
    gets(a);
    fun(a);
    puts(a);
    return 0;
}
*/
