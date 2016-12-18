#include <stdio.h>
#include <string.h>
int main()
{
    int a,b=1,sum=0,d;
    char c[10000];
    gets(c);
    for(a=0;a<strlen(c);a++)
    {
        d=c[a];
        if(97<=d&&d<=123)
        {
            sum+=b*(c[a]-96);
            b++;
        }
        if(65<=d&&d<=91)
        {
            sum+=b*(c[a]-64);
            b++;
        }
        if(d==32)
            b++;
    }
    printf("%d",sum);
    return 0;
}
