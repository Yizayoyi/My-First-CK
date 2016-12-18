#include <stdio.h>

long long loop(int a,int b)
{
    int sum = 1, num = a;
    while(b > 0)
    {
        if(b & 1)
            sum = sum * num;
        num = num * num;
        b >>= 1;
    }
    return sum;
}
int main()
{
    int a, b, sum;
    scanf("%d%d",&a, &b);
    sum = loop(a, b);
    printf("%d",sum);
    return 0;
}
