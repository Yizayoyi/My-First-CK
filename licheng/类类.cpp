#include<iostream>
#include<string>
using namespace std;
class product//包括产品名称，单价，库存的数量
{
private:
    string name;
    int price,number;
public:
    product(string Name="apple",int Price=10,int Number=5)
    {
        name=Name;
        price=Price;
        number=Number;
    }
    void shuxing()
    {
        cout<<name<<endl<<price<<endl<<number<<endl;
    }
    void buy(int ge)
    {
        if(ge<=number)
            cout<<"truth";
        if(ge>number)
            cout<<"fault";
    }
     ~product(){}
};
int main()
{
    int ge;
    product aaa("banana",3,5);
    aaa.shuxing();
    cin>>ge;
    aaa.buy(ge);
    return 0;
}

