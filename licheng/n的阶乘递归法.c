#include <stdio.h>
int jie(int n)
{
    if(n==0||n==1)
        return 1;
    else return n*jie(n-1);
}
int main()
{
    int N,y;
    while(~scanf("%d",&N))
    {
        y=jie(N);
        printf("%d\n",y);
    }
    return 0;
}
