#include <stdio.h>
int main()
{
    int M,N,a,b,c,i=1,m,n,d,e;
    int z[100][100];
    scanf("%d %d",&M,&N);
    for(m=0;m<=M-1;m++)
    {
        for (n=0;n<N-1-m;n++)
        {
            z[m][n]=i;
            i++;
        }
        for (a=m+1;a<M-m;a++)
        {
            z[a][n]=i;
            i++;
        }
        for (b=N-1;b>=0+m;b--)
        {
            z[a][b]=i;
            i++;
        }
        for (c=M-2;c>=0+n;c--)
        {
            z[c][b]=i;
            i++;
        }
    }
        for(d=0;d<M;d++)
        {
            for (e=0;e<N;e++)
            {
                printf ("%d\t",z[M][N]);
            }
            printf("\n\n");
        }
    return 0;
}
