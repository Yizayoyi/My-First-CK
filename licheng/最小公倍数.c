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
    printf("��С��Լ����%d\n",a);
    printf("��󹫱�����%d",(d*e)/a);
    return 0;
}
