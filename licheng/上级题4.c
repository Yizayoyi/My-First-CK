#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[4],i,j,c[4],b;
    srand((unsigned)time(NULL));
    for(i=0;i<4;i++)
        a[i]=rand()%10;
    printf("��ӭ�μ����������Ʋ�����Ϸ\n");
    printf("��������λ����(����-5222�˳���Ϸ):\n");
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
         //   printf("����˱ƣ��ⶼ�²���\n");
            printf("��¶��ˣ�%dλ��\n",j);
        }
    }
    if(j!=4)
        printf("�˳��ɹ�");
    else
        printf("��ϲ�㣬�����ڲ¶���");
    return 0;
}
