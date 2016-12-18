#include <iostream>
using namespace std;
class shop
{
    string Name;
    int Code,Price,Number;
public:
    shop(string name="商品",int code=01,int price=03,int number=100)
    {
        Name=name;
        Code=code;
        Price=price;
        Number=number;
    }
    void shangpin()
    {
        cout<<Name<<endl<<Code<<endl<<Price<<endl<<Number;
    }
    void  buy (int h,int n)
    {
        if(n<=Number)
        {
            cout<<Name<<endl<<Code<<endl<<Price<<endl<<(Number-n)<<endl;
            cout<<(n*Price);
        }
        if(n>Number)
            cout<<"fault";
    }
    ~shop(){}
};
int main()
{
    int h,n;
    shop a("可乐",01,3,100);
    shop b("薯片",02,5,50);
    a.shangpin();
    b.shangpin();
    cin>>h>>' '>>n;
    a.buy(h,n);
    b.buy(h,n);
    return 0;
}
