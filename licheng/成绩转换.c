#include <stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        if (t>100||t<0)
            printf("Score is error!");
        if (90<=t&&t<=100)
            {
                printf("A");
        }
        if (80<=t&&t<=89)
            {
                printf("B");
        }
        if (70<=t&&t<=79)
            {
                printf("C");
        }
        if (60<=t&&t<=69)
            {
                printf("D");
        }
        if (0<=t&&t<=59)
            {
                printf("E");
        }
        if (t>100&&t<0)
        {
            printf("Score is error!");
        }
        printf("\n");
    }

    return 0;
}
