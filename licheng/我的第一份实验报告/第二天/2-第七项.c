#include <stdio.h>
#include <math.h>
int main()
{
    double num,p=1,i=3,k=1;
    scanf("%lf",&num);
    while((1/i)>num)
    {
        p+=((1/i)*pow(-1,k));
        i+=2;
        k++;
    }
    printf("%lf",4*p);
}
