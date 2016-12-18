/*#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,k=0;
    gets(a);
    if(a[0]!=' ')
        k=1;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i-1]==' '&&a[i]!=' ')
            k++;
    }
    printf("%d",k);
}*/



#include <stdio.h>
int main()
{
    char ch;
    int k=0,i=0,j=0;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        j++;
        if(j==1&&ch!=' ')
            i=1;
        if(ch==' ')
            k=1;
        if(ch!=' '&&k==1)
        {
            i++;
            k=0;
        }
    }
    printf("%d",i);
}
