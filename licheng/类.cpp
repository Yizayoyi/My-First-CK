/*#include <iostream>
using namespace std;
class first
{
public:                     //���У����ࣨ���ࣩ---�̳�---�����࣬����
    int a;
private:                     //˽�У�����
    int b;
protected:                  //���������࣬����
    int c;
    void A (int aa)
    {
        a=aa;
    }                              //һ�㹹�캯�������ڸ�ֵ��
    void print
    {
        cout<<a<<' '<<b<<' '<<c
    }
};
int main
{
    A(33);
    printf("%d",first);
}*/
#include<iostream>
#include<string>
using namespace std;
class   Address
{
    string name,address,city,mail;
public:
    Address(string name1,string address1,string city1,string mail1)
    {
        name=name1;
        address=address1;
        city=city1;
        mail=mail1;
    }
    ~Address(){}       //��������
    void ChangeName()
    {
        int temp;
        string temp2;
        cout<<"������Ҫ�޸��ĸ����ԣ�"<<endl;
        cout<<"1.name 2.address 3.city 4.mail"<<endl;
        cout<<"�����ż���:"<<endl;
        cin>>temp;
        cout<<"�����޸�����:"<<endl;
        cin>>temp2;
        if(temp==1)
            name=temp2;
        else
        if(temp==2)
            address=temp2;
        else
        if(temp==3)
            city=temp2;
        else
            mail=temp2;
        cout<<"�޸ĳɹ�"<<endl;
    }
    void Display()
    {
        cout<<name<<" "<<address<<" "<<city<<" "<<mail<<endl;
    }
};
int main()
{
    Address Address1("����ѧ��","ustil","����","11003");
    Address1.ChangeName();
    Address1.Display();
    return 0;
}
