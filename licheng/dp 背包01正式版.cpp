#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,va,w[10005]={0},v[10005]={0},f[10005]={0};
		cin>>n>>va;
		for(int i=0;i<n;i++)    //�����ֵ
            cin>>w[i];
		for(int i=0;i<n;i++)         //��������
            cin>>v[i];
		for(int i=0;i<n;i++)         //�жϵ�i����Ʒ
		{
		    for(int j=va;j>=v[i];j--)         //��������������Ȼ���ظ�������Ʒ
                f[j]=max(f[j],f[j-v[i]]+w[i]);       //״̬ת�Ʒ��̣��жϵ�i����Ʒ�Ƿ����
		}
		cout<<f[va]<<endl;  //������
	}
	return 0;
}
