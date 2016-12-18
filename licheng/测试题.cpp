#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m,n,*a,i,j,k=1,b[100],l=0,sum=0,c=1,d[100],e=0,f;
    while(cin>>n)
    {
        delete []a;
        a=new int [n];
        for(m=0;m<n;m++)
            cin>>a[m];
        sort(a,a+n);
        for(m=0;m<n;m+=c)
        {
            c=1;
            for(i=m+1;i<n;i++)
            {
                if(a[m]==a[i])
                {
                    k++;
                    c++;
                }
                else
                    k=1;
                if(k%2==0)
                {
                    b[l]=a[m];
                    l++;
                    sum++;
                }
            }
            for(f=1;f<=c/2;f++)
            {
                if(c%2==0)
                {
                    d[e]=a[m];
                    e++;
                }
            }
            for(f=0;f<=c/2;f++)
            {
                if(c%2!=0)
                {
                    d[e]=a[m];
                    e++;
                }
            }
        }
        for(m=0;m<n-sum;m++)
            cout<<d[m]<<' ';
        for(l=sum-1;l>=0;l--)
            cout<<b[l]<<' ';
        cout<<endl;
        l=0,sum=0,e=0;
    }
}
