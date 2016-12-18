#include <stdio.h>
int main()
{
    int a[12],m,n=1,k=0;
    for(m=0;m<12;m++)
    {
        a[m]=n;
        n++;
        if(a[m]%3==0)
            k++;
    }

}
