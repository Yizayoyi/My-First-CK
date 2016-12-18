#include<stdio.h>
void quick(int a[],int low,int high)
{
    int i=low, j=high, x=a[i];
    if(low<high)
    {
        while(i<j)
        {
            while((a[j]>=x&&(i<j)))
            {
                j--;
            }
            a[i]=a[j];
            while((a[i]<x&&(i<j)))
            {
                i++;
            }
            a[j]=a[i];
        }
        a[i]=x;
        quick(a,low,i-1);
        quick(a,j+1,high);
    }
}

struct student
{
     char name[10];
     int id;
     double sc;
};
int main ()
{
    struct student stu[100];
    struct student temp;
    int i, j, n, p[100];
    while(~scanf("%d", &n)&&n!=0)
    {
        for(i=0; i<n ;i++)
        {
            p[i]=0;
            scanf("%s%d%lf", &stu[i].name, &stu[i].id, &stu[i].sc);
            p[i]=stu[i].sc;
        }
        quick(p,0,n-1);
        for(i=0; i<n; i++)
         {
             for(j=0; j<n; j++)
             {
                if(stu[i].sc==p[j])
                {
                    stu[n+j]=stu[i];
                    p[j]=0;
                    break;
                }
             }
         }
         for(i=0; i<n-1;i++)
         {
             if(stu[i].sc=stu[i+1].sc)
             {
                 if(stu[i].id>stu[i+1].id)
                 {
                     temp=stu[i];
                     stu[i]=stu[i+1];
                     stu[i+1]=temp;
                 }
             }
         }
         for(i=0; i<n; i++)
         {
             stu[i]=stu[i+n];
         }
             printf("%-10s%-10d%-6.2f\n", stu[1].name, stu[1].id, stu[1].sc);

    }
}

