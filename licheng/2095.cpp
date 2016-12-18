#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j,m,*a,k=0;
    while(~scanf("%d",&n)&&n!=0)
    {
        a=new int [n];
        for(i=0;i<n;i++)
            scanf("%d",&a[j]);
        for(i=0;i<n;i++)
        {
            for(m=0;m<n;m++)
            {
                if(a[i]==a[m])
                    k++;
            }
            if(k%2!=0)
                printf("%d",a[i]);
            k=0;
            printf("\n");
        }
    }
}
