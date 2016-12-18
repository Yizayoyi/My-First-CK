#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,va,w[10005]={0},v[10005]={0},f[10005]={0};
		cin>>n>>va;
		for(int i=0;i<n;i++)    //输入价值
            cin>>w[i];
		for(int i=0;i<n;i++)         //输入重量
            cin>>v[i];
		for(int i=0;i<n;i++)         //判断第i个物品
		{
		    for(int j=va;j>=v[i];j--)         //背包重量需逆序不然会重复放置物品
                f[j]=max(f[j],f[j-v[i]]+w[i]);       //状态转移方程，判断第i个物品是否放入
		}
		cout<<f[va]<<endl;  //输出结果
	}
	return 0;
}
