/*#include <iostream>
using namespace std;
int main()
{
    int m,i,j;
    char a[3][3];
    while(cin>>m)
    {

    }
    return 0;
}
*/



#include <stdio.h>

void da(int a,int b)
{
    if(b==1)
    {
        if(a==0||a==2||a==3||a==5||a==6||a==7||a==8||a==9)
            printf(" _  ");
        else
            printf("    ");
    }
    if(b==2)
    {
        if(a==2||a==3)
            printf(" _| ");
        if(a==0)
            printf("| | ");
        if(a==1||a==7)
            printf("  | ");
        if(a==4||a==8||a==9)
            printf("|_| ");
        if(a==5||a==6)
            printf("|_  ");
    }
    if(b==3)
    {
        if(a==0||a==6||a==8)
            printf("|_| ");
        if(a==1||a==4||a==7)
            printf("  | ");
        if(a==3||a==5||a==9)
            printf(" _| ");
        if(a==2)
            printf("|_  ");
    }
}
int main()
{
    int a,a1,a2,a3,a4,i;
    scanf("%d",&a);
    a1=a/1000;
    a2=a%1000/100;
    a3=a%100/10;
    a4=a%10;
    for(i=1;i<=3;i++)
    {
        da(a1,i);
        da(a2,i);
        da(a3,i);
        da(a4,i);
        printf("\n");
    }
    return 0;
}
