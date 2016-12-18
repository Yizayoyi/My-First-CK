#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],c[100];
    gets (str1);
    gets (str2);
    int i,j,k,sum=0;
    if(strlen(str1)>strlen(str2))
    {
        strcpy(c,str2);
        strcpy(str2,str1);
        strcpy(str1,c);
    }
    for (i=0;i<strlen(str1);i++)
    {
        for (j=0+k;j<strlen(str2);j++)
        {
            if (str1[i]==str2[j])
            {
                sum++;
                k=j;
                break;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
