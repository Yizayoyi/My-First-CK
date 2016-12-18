#include <stdio.h>
int main()
{
    int a[10],i,n,j;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
     for(i=0;i<10;i++)
     {
         for(n=0;n<10-i;n++)
         {
             if (a[n]>a[n+1])
             {
                 j=a[n];
                 a[n]=a[n+1];
                 a[n+1]=j;
             }
         }

     }
     for (i=0;i<10;i++)
         printf("%d ",a[i]);
         return 0;
}

