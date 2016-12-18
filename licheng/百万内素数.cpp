#include<iostream>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<algorithm>
using namespace std;
#define M 1000000
bool visit[10100000];
int prime[10000000];


void table()
{
    memset(visit,true,sizeof(visit));
    int num = 0;
    for (int i = 2; i <= M; ++i)
    {
        if (visit[i] == true)
        {
            num++;
            prime[num] = i;
        }
        for (int j = 1; ((j <= num) && (i * prime[j] <= M));  ++j)
        {
            visit[i * prime[j]] = false;
            if (i % prime[j] == 0) break; //点睛之笔
        }
    }
}

int main()
{
    memset(prime, 0, sizeof(prime));
    int count = 0;
    table();
    for(int i = 0; i <= M; ++i)
        if(prime[i])
        {
            cout<<prime[i]<<" ";
            count++;
        }
        cout<<endl;
        cout<<"素数个数为："<<count<<endl;
}
