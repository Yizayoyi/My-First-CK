#include <stdio.h>
int main()
{
    int a[5],i;
    int *p,*q;
    for(i=0;i<5;i++)
        scanf("%d",a[i]);
    *p=a;
    *q=a;
    p++;
    printf("%d",p-q);
}
