#include <stdio.h>
#include <string.h>
char fun (char *a)
{
    int i,j,b[5],k;
    for(i=0;i<5;i++)
        b[i]=a[i];
    for(i=1;i<5;i++)
    {
        j=0;
        while(b[i]>b[j]&&j<i)
            j++;
        if(i != j)
        {
            int temp = b[i];
            for(k = i; k > j; k--)
                b[k] = b[k-1];
            b[j] = temp;
        }
    }
    for(i=0;i<5;i++)
        a[i]=b[i];
}
int main()
{
    char a[5];
    int i;
    gets(a);
    fun(a);
    for(i=0;i<5;i++)
        printf("%c",a[i]);
}
