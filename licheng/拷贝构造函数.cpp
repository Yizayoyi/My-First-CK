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
        a=c.a;                    //c�Ƕ���a�����ԣ���a�����Ը���c
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
