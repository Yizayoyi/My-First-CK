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
    cout << name << " ��Ʒ��ţ�" << num << " ���ۣ�" << dj << " ��棺" << kc << endl;
}
void buy(long num1, long sl)
{
    if (sl > kc)
                cout << "��治�㣬����ʧ�ܣ�����" << endl;
            else
            {
                if (money - (sl * dj) < 0)
                    cout << "���㣬����ʧ�ܣ�����" << endl;
                else
                {
                    kc -= sl;
                    cout << "����ɹ���������һ�������ˣ�" << sl * dj << endl;
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
 	shop[0].csh("���", 0, 5, 100);
 	shop[1].csh("����", 1, 3, 100);
 	shop[2].csh("��ţ", 2, 7, 100);
 	shop[3].csh("�ֱ�", 3, 20, 100);
 	shop[4].csh("�㳦", 4, 2, 100);
 	sayall();
 	cout << "�����н�Ǯ��" << money << endl << "�������Ʒ��ź͹���������";
while(cin >> num1 >> sl)
{
    if (num1 > 4)
            cout << "����ѡ�Ĳ�Ʒ�����ڣ�����ʧ�ܣ�����" << endl << endl;
        else
            shop[num1].buy(num1, sl);
        sayall();
        cout << "�����н�Ǯ��" << money << endl << "�������Ʒ��ź͹���������";
}
return 0;
}
