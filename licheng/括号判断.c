#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int sum1=0,sum2=0,sum3=0,i;
    while(~scanf("%c",&a[i]))
    {
        for(i=0;i<strlen(a);i++)
        {
            if(c[i]='(')
                sum1++;
            if(c[i]=')')
                sum1--;
            if(c[i]='[')
                sum2++;
            if(c[i]=']')
                sum2--;
            if(c[i]='{')
                sum3++;
            if(c[i]='}')
                sum3--;
            if(sum1<0||sum2<0||sum3<0)
            {
                printf("no");
                return 0;
            }
        }

    }
    return 0;
}
