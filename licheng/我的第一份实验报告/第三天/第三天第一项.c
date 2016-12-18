#include <stdio.h>
#include <string.h>
int len (char a[1000])
{
    int s=0,i;
    for(i=0;i<1000;i++)
    {
        if(a[i]==0)
            break;
        s++;
    }
    return s;
}
int main()
{
    char a[1000];
    int s;
    gets(a);
    s=len(a);
    printf("%d",s);
    return 0;
}




/*#include<stdio.h>
#include<string.h>

int len(char a[100] )
{
    int i;
    for(i=0;i<100;i++)
    {
        if(a[i]==0)
            break;
    }
    return i;
}
int main()
{
    int k;
    char a[100];
    gets(a);
    k=len(a);
    printf("%d\n",k);
    return 0;
}*/
