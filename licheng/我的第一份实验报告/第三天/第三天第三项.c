#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i;
    gets(a);
    if(a[0]!=' ')
        a[0]-=32;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            a[i+1]-=32;
    }
    for(i=0;i<strlen(a);i++)
        printf("%c",a[i]);
}
