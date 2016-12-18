#include <stdio.h>
#include <string.h>
char fun (char *a)
{
    int j,i,k,l;
    char ch;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5-i;j++)
        {
            l=a[j+1],k=a[j];
            if(k>l)
            {
                ch=a[j];
                a[j]=a[j+1];
                a[j+1]=ch;
            }
        }
    }
}
int main()
{
    char a[6];
    int i;
    gets(a);
    fun(a);
    for(i=0;i<6;i++)
        printf("%c",a[i]);
    return 0;
}
