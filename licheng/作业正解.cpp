#include<iostream>
#include<string>

using namespace std;

long money = 3000;

class xmb
{
private:
string name;
long dj, kc, num;
public:
~xmb(){};
void csh(string name1, long num1, long dj1, long kc1)
{
    name = name1;
            num = num1;
            dj = dj1;
            kc = kc1;
}
void say()
{
    cout << name << " 产品编号：" << num << " 单价：" << dj << " 库存：" << kc << endl;
}
void buy(long num1, long sl)
{
    if (sl > kc)
                cout << "库存不足，购买失败！！！" << endl;
            else
            {
                if (money - (sl * dj) < 0)
                    cout << "余额不足，购买失败！！！" << endl;
                else
                {
                    kc -= sl;
                    cout << "购买成功！！！您一共花费了：" << sl * dj << endl;
                    money -= sl * dj;
                }
            }
            cout << endl;
}
};

xmb shop[5];

void sayall()
{
    for (int i = 0; i < 5; i++)
        shop[i].say();
}

int main()
{
long sl, num1;
 	shop[0].csh("面包", 0, 5, 100);
 	shop[1].csh("可乐", 1, 3, 100);
 	shop[2].csh("红牛", 2, 7, 100);
 	shop[3].csh("钢笔", 3, 20, 100);
 	shop[4].csh("香肠", 4, 2, 100);
 	sayall();
 	cout << "您现有金钱：" << money << endl << "请输入产品编号和购买数量：";
while(cin >> num1 >> sl)
{
    if (num1 > 4)
            cout << "您所选的产品不存在，购买失败！！！" << endl << endl;
        else
            shop[num1].buy(num1, sl);
        sayall();
        cout << "您现有金钱：" << money << endl << "请输入产品编号和购买数量：";
}
return 0;
}
