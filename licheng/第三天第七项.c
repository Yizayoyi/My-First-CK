#include <stdio.h>
#include <string.h>
char fun(char *a,char *b,char *c)
{
    int i,m=0,n=0;
    char ch;
    for(i=0;i<strlen(b)/2;i++)
    {
        ch=b[i];
        b[i]=b[strlen(b)-1-i];
        b[strlen(b)-1-i]=ch;
    }
    if(strlen(a)>=strlen(b))
    {
        for(i=0;i<strlen(a)+strlen(b);i++)
        {
            if(i<2*strlen(b))
            {
                if((i+1)%2!=0)
                {
                    c[i]=a[m];
                    m++;
                }
                else
                {
                    c[i]=b[n];
                    n++;
                }
            }
            else
            {
                c[i]=a[m];
                m++;
            }
        }
    }
    else
    {
        for(i=0;i<strlen(a)+strlen(b);i++)
        {
            if(i<2*strlen(a))
            {
                if((i+1)%2!=0)
                {
                    c[i]=a[m];
                    m++;
                }
                else
                {
                    c[i]=b[n];
                    n++;
                }
            }
            else
            {
                c[i]=b[n];
                n++;
            }
        }
    }
}
int main()
{
    char a[100],b[100],c[100];
    int i;
    gets(a);
    gets(b);
    fun(a,b,c);
    for(i=0;i<strlen(a)+strlen(b);i++)
        printf("%c",c[i]);
}
