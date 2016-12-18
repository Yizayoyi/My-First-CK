#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,f=0,k=0;
    scanf("%d %d",&m,&n);
    while(m!=0)
    {
        i=m%n;
        m=m/n;
        f=f+i*pow(10,k);
        k++;
    }
    printf("%d",f);
}
