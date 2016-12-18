/*#include <stdio.h>
int fun (int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return a,b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun(&a,&b);
    printf("%d %d",a,b);
    return 0;
}*/




#include <stdio.h>

static int a, b;

void change()

{

    a = a + b;

    b = a - b;

    a = a - b;

}

void main()

{

    scanf("%d%d", &a, &b);

    printf("交换前：a=%d, b=%d\n", a, b);

    change();

    printf("交换后：a = %d, b = %d\n", a, b);

}
