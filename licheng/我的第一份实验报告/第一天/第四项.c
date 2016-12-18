/*#include <stdio.h>
int fun(int a,int b)
{
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=fun(a,b);
    d=(a*b)/c;
    printf("%d %d",c,d);
}*/



#include <stdio.h>
int fun (int a,int b)
{
    int c;
    c=a%b;
    a=b;
    b=c;
    if(b!=0)
        return fun(a,b);
    else
        return a;
}
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=fun(a,b);
    d=(a*b)/c;
    printf("%d %d",c,d);
}
