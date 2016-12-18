#include <stdio.h>
#include <string.h>
int len (char a[1000])
{
    int s=0,i;
    for(i=0;i<1000;i++)
    {
        if(a[i]==0)
            break;
        if(a[i]>='0'&&a[i]<='9')
            s++;
    }
    return s;
}
int main()
{
    char a[1000],enter;
    int s,i,m;
    while(~scanf("%d",&i))
    {
        scanf("%c",&enter);  //enter 接受回车键
        for(m=0;m<i;m++)
        {
            gets(a);
            s=len(a);
            printf("%d\n",s);
        }
    }
    return 0;
}
