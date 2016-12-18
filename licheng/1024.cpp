#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i,n,p[100],r[100],route[10],j,k=-1,m=0;
    memset(route, 0, sizeof(route));
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            scanf("%d %d",&r[i],&p[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(r[i]==p[j]&&k<j)
                {
                    route[m]++;
                    k=j;
                }
            }
        }
        cout<<route[m]<<endl;
        memset(route, 0, sizeof(route));
    }
}
