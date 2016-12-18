#include <iostream>
#include <math.h>
using namespace std;
class Triangle
{
private:
    int d,e,f;
public:
    Triangle (int a=1,int b=2,int c=3)
    {
        d=a;
        e=b;
        f=c;
    }
    void tf()
    {
        if((d+e)>f&&(d-e)<f)
        {
            cout<<"truth"<<' '<<(d+e+f)<<' '<<sqrt(((d+e+f)/2)*((d+e+f)/2-d)*((d+e+f)/2-e)*((d+e+f)/2-f))<<endl;
            if(d==e&&d==f&&e==f)
                cout<<"等边三角形";
            if(d*d+e*e==f*f||d*d+f*f==e*e||e*e+f*f==d*d)
                cout<<"直角三角形";
        }
        else
            cout<<"fault";
    }
    ~Triangle(){}       //清除用，任意放
};
int main()
{
    cout<<"请输入三角形三边"<<' ';
    int d,e,f;
    cin>>d>>e>>f;
    Triangle a(d,e,f);
    a.tf();
    return 0;
}
