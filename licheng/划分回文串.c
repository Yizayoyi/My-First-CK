#include <stdio.h>
#include <string.h>
int main()
{
    char a[1010];
    int i,j,k=0,m,n=0,l,b=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            n++;
            if(a[i]==a[j])
            {
                l=n;
                for(m=i;m<n/2;m++)
                {
                    if(a[m]==a[n])
                    {
                        n--;
                        b++;
                    }
                    else
                        break;
                }
                if(b==l/2)
                {
                    k++;
                    i=i+l;
                    n=0;
                }
            }
        }
    }
    printf("%d",k);
}
