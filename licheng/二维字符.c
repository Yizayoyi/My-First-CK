#include<stdio.h>

int main()
{
    char a[4][4];
    int i,j,k;
    for(i=0;i<4;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}

/*
0 1 2
a b \0
*/
