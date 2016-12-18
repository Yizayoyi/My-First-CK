#include <iostream>
using namespace std;
int main()
{
    int m,n,a[50],i,j=0,sum=0,p,pe;
    while(cin>>m>>n)
    {
        a[0]=0;
        for(i=0;i<n;i++)
        {
            a[i]+=2;
        }
        if(n%m==0)
        {
            for(i=j;i<j+m;i++)
            {
                sum+=a[i];
                p=sum/m;
                cout<<p;
                if(j<n)
                    {
                        j+=m;
                        cout<<' ';
                    }
                else
                    break;
            }
        }
        if(n%m!=0)
        {
            for(i=j;i<j+m;i++)
            {
                sum+=a[i];
                p=sum/m;
                cout<<p;
                if(j<n-(n%m))
                {
                    cout<<' ';
                    j+=m;
                }
                else
                    break;
            }
            sum=0;
            for(i=n-(n%m)-1;i<n;i++)
                sum+=a[i];
            pe=sum/(n%m);
            cout<<pe;
        }
        sum=0;
    }
    return 0;
}
