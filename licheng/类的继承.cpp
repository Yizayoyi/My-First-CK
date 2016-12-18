#include <iostream>
using namespace std;
class A
{
public:
    A(int i)
    {
        cout<<"Great A"<<i<<endl;
    }
    ~A()
    {
        cout<<"Dele A"<<endl;
    }
};
class B
{
public:
    B(int i)
    {
        cout<<"Great B"<<i<<endl;
    }
    ~B()
    {
        cout<<"Dele B"<<endl;
    }
};
class C:public B,public A
{
public:
    C(int a,int b,int c,int d):A(a),Bp(d),Ap(c),B(b)
    {

    }
private:
    A Ap;
    B Bp;
};
int main()
{
    C Cp(1,2,3,4);
    return 0;
}
