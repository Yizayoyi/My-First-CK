#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int an[101],i,j,k=0,d=0;
    scanf("%s %s",str1,str2);
    int s1=strlen(str1),s2=strlen(str2);
    for(i=s1-1,j=s2-1;i>=0&&j>=0;k++,i--,j--)
    {
        an[k]=str1[i]-48+str2[j]-48+d;
        d=an[k]/10;
        an[k]=an[k]%10;
    }

    if(k==s2)
    {
        while(i>=0)
        {
            an[k]=str1[i]-48+d;
            d=an[k]/10;
            an[k]%=10;
            k++;
            i--;
        }
    }
    else
        while(j>=0)
        {
            an[k]=str2[j]+d-48;
            d=an[k]/10;
            an[k]%=10;
            j--,k++;
        }
    if(d!=0)
    {
        an[k]=d;
        k++;
    }
    for (k=k-1;k>=0;k--)
        printf("%d",an[k]);
    printf("\n");
    return 0;
}
