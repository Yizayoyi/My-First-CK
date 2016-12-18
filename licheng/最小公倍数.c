#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    d=a;
    e=b;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("最小公约数是%d\n",a);
    printf("最大公倍数是%d",(d*e)/a);
    return 0;
}
