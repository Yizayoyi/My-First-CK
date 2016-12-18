#include<iostream>
#include<cstring>
using namespace std;

long long n;
bool visit[10100000];
long prime[10000000];

void init_prim()
{
    memset(visit, 1, sizeof(visit));
    long num = 0;
    for (long i = 2; i <= n; ++i)
    {
        if (visit[i] == 1)
        {
            num++;
            prime[num] = i;
        }
        for (long j = 1; ((j <= num) && (i * prime[j] <= n));  ++j)
        {
            visit[i * prime[j]] = 0;
            if (!(i % prime[j])) break; //点睛之笔   //i%p[j]==0
        }
    }
}

int main()
{
    memset(prime, 0, sizeof(prime));
    int count = 0;
    cin>>n;
    init_prim();
    for(long i = 0; i <= n; ++i)
        if(prime[i])
        {
            cout<<prime[i]<<" ";
            count++;
        }
    cout<<endl;
    cout<<"素数个数为："<<count<<endl;
    return 0;
}
