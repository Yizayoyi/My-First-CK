#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T,N,V,a[1000],b[1000],i,weight=0,price=0,j=0,c[1000],k=0,m;
    while(cin>>T)
    {
        cin>>N>>V;
        for(i=0;i<N;i++)
            cin>>a[i];
        for(i=0;i<N;i++)
            cin>>b[i];
        for(m=0;m<N;m++)
        {
            for(i=j;i<N;i++)
            {
                price+=a[i];
                weight+=b[i];
                if(weight==V)
                {
                    c[k]=price;
                    j++;
                    k++;
                    price=a[m];
                    weight=b[m];
                    i=j;
                }
                if(weight!=V&&i==N-1)
                {
                    price=0;
                    weight=0;
                    break;
                }
            }
        }
        sort(c,c+k+1);
        cout<<c[k]<<endl;
    }
}
