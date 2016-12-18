/*#include <iostream>
using namespace std;
class first
{
public:                     //共有，父类（基类）---继承---派生类，子类
    int a;
private:                     //私有，本类
    int b;
protected:                  //保护，父类，子类
    int c;
    void A (int aa)
    {
        a=aa;
    }                              //一般构造函数（用于赋值）
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
    ~Address(){}       //析构函数
    void ChangeName()
    {
        int temp;
        string temp2;
        cout<<"请问你要修改哪个属性？"<<endl;
        cout<<"1.name 2.address 3.city 4.mail"<<endl;
        cout<<"输入编号即可:"<<endl;
        cin>>temp;
        cout<<"输入修改内容:"<<endl;
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
        cout<<"修改成功"<<endl;
    }
    void Display()
    {
        cout<<name<<" "<<address<<" "<<city<<" "<<mail<<endl;
    }
};
int main()
{
    Address Address1("于雷学长","ustil","沈阳","11003");
    Address1.ChangeName();
    Address1.Display();
    return 0;
}
