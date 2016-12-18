/*#include <stdio.h>
int main()
{
    int m=0,n,i,j=1,k=1,h=1;
    while(~scanf("%d",&n)&&n>0&&n<55)
    {
        m=0,j=1,k=1,h=1;
        for(i=1;i<=n;i++)
        {
            m+=j;
            if(i%4==0)
            {
                j+=k;
                k++;
            }
            if(i>4)
            {
                j+=h;
                h++;
            }
        }
        printf("%d\n",m);
    }
}*/








#include"stdio.h"
main()
{
	int n,i;
	while(scanf("%d",&n),n!=0)

	   { if(n<=4) n=n;
		else
			for(i=n-4;i!=0;i--)
			n=n+i;

	printf("%d\n",n);
	   }

}













/*#include<stdio.h>
int main()
{
	int arr[60];
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	arr[4]=4;

	int i;
	for(i=5;i<56;i++)
	{
		arr[i]=arr[i-1]+arr[i-3];
	}
	int n;
	while(scanf("%d",&n)!=EOF)
	{
			if(n==0)
	{
		return 0;
	}
	printf("%d\n",arr[n]);
	}


	return 0;
}
*/
