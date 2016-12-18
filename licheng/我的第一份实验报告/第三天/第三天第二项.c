#include <stdio.h>
#include <string.h>
int fun (char a[1000],char b)
{
    int i,j=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b)
            j++;
    }
    return j;
}
int main()
{
    char a[1000],b;
    gets(a);
    scanf("%c",&b);
    int j;
    j=fun(a,b);
    printf("%d",j);
}
