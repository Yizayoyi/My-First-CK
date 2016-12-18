#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int m,n,i,j,*a;
    double p,sum=0;
    while(cin>>n)
    {
        a=new int [n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(j=1;j<=n-2;j++)
            sum+=a[j];
        p=sum/(n-2);
        cout<<setprecision(2)<<fixed<<p<<endl;
        sum=0;
    }
    return 0;
}
