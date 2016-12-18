#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[4],i,j,c[4],b;
    srand((unsigned)time(NULL));
    for(i=0;i<4;i++)
        a[i]=rand()%10;
    printf("欢迎参加王俊博特制猜数游戏\n");
    printf("请输入四位数字(输入-5222退出游戏):\n");
    while(j!=4&b!=-5222)
    {
        j=0;
        scanf("%d",&b);
        c[0]=b/1000;
        c[1]=b%1000/100;
        c[2]=b%100/10;
        c[3]=b%10;
        for(i=0;i<4;i++)
        {
            if(a[i]==c[i])
                j++;
        }
        if(j!=4&&b!=-5222)
        {
         //   printf("你个菜逼，这都猜不对\n");
            printf("你猜对了：%d位数\n",j);
        }
    }
    if(j!=4)
        printf("退出成功");
    else
        printf("恭喜你，你终于猜对了");
    return 0;
}
