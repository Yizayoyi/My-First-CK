#include <stdio.h>
int main()
{
    int a,b,c,d;
    while (~scanf("%4d/%2d/%2d",&a,&b,&c))
    {
        if (a%4==0)
        {
            if(b%2==0)
            {
                if(b==2)
                    d=31+c;
                else
                d=c+ 29+31*(b/2)+30*(b/2-2);
            }
            if(b%2!=0)
            {
                if (b==1)
                    d=c;
                if (b==3)
                    d=c+29+31;
                if (b==5||b==7)
                    d=29+c+31*(b/2)+30*(b/2-1);
                if (b==9||b==11)
                    d=29+c+31*(b/2+1)+30*(b/2-2);
            }
        }
        if (a%4!=0)
        {
             if(b%2==0)
            {
                if(b==2)
                    d=31+c;
                else
                d=c+ 28+31*(b/2)+30*(b/2-2);
            }
            if(b%2!=0)
            {
                if (b==1)
                    d=c;
                if (b==3)
                    d=c+28+31;
                if (b==5||b==7)
                    d=28+c+31*(b/2)+30*(b/2-1);
                if (b==9||b==11)
                    d=28+c+31*(b/2+1)+30*(b/2-2);
        }
    }
    printf ("%d\n",d);
    }
    return 0;
}
