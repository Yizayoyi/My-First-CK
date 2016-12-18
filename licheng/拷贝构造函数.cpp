#include <iostream>
using namespace std;
class cop
{
private:
    int a,b,*c;
public:
    cop(int A,int B)
    {
        a=A;
        b=B;
    }
    cop(const cop &c)
    {
        a=c.a;                    //c是对象，a是属性，把a的属性付给c
        b=c.b;
    }
    void show()
    {
        cout<<a<<' '<<b;
    }
};
int main()
{
    cop cop1(1,2);
    cop cop2=cop1;
    cop2.show();
    return 0;
}
