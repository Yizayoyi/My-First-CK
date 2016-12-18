#include <stdio.h>
int main()
{
    int a,b,c,N,i,j;
    scanf("%d",&N);
    int d[N][2];
    for(i=0;i<N;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    for (i=0;i<N;i++)
    {
        c=d[i][0]+d[i][1];
        printf("%d\n",c);
    }
   return 0;
}




#include <stdio.h>
 int main()
 {
 int n,i,a,b;
 scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d %d",&a, &b);
 printf("%d\n",a+b);
 }
 }
