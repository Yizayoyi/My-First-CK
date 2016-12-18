/*#include <stdio.h>
#include <string.h>
char fun (char *a,char *b)
{
    int i,k=0,j=0;
    for(i=0;i<strlen(a);i++)
    {
        k++;
        if((k+j)%4==0)
        {
            b[i+j]=' ';
            j++;
            b[i+j]=a[i];
        }
        else
            b[i+j]=a[i];
    }
}
int main()
{
    char a[100],b[100];
    int i;
    gets(a);
    fun(a,b);
    for(i=0;i<strlen(b);i++)
        printf("%c",b[i]);
    return 0;
}*/




















#include<stdio.h>
#include<string.h>

char b[100];
int fun(char a[100] )
{
    int i, j=0, k=0, p;
    p=strlen(a);
    for(i=0;i<p;i++)
    {
        b[j]=a[i];
        k++;
        j++;
        if(k==3)
        {
            b[j]=' ';
            j++;
            k=0;
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
    puts(b);
    return 0;
}

