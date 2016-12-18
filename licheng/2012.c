#include <stdio.h>
int main()
{
    int x,y,i,n,a=0,b;
    while (~scanf("%d %d",&x,&y)&&x!=0||y!=0&&-39<=x&&x<y&&y<=50)
    {
        a=0;
        for(i=x;i<=y;i++)
        {
            n=(i*i)+i+41;
            for (b=2;b<n;b++)
            {
                if(n%b==0)
                {
                    a++;
                }
            }
        }
        if(a==0)
            printf ("OK\n");
        if(a!=0)
            printf("Sorry\n");

    }
    return 0;
}
