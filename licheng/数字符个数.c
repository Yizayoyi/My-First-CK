#include <stdio.h>
#include <string.h>
int main()
{
    char c[10],a;
    gets(c);
    scanf("%c",&a);
    int sum=0,i;
    for(i=0;i<10;i++)
    {if(c[i]==a)
        sum+=1;
    }
        printf("%d",sum);
        return 0;

}
