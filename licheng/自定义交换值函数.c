#include <stdio.h>
int change(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
    return (*x,*y);
}
int main()
{
    int a=1,b=2;
    change(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
