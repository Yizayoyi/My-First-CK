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
                cout<<"�ȱ�������";
            if(d*d+e*e==f*f||d*d+f*f==e*e||e*e+f*f==d*d)
                cout<<"ֱ��������";
        }
        else
            cout<<"fault";
    }
    ~Triangle(){}       //����ã������
};
int main()
{
    cout<<"����������������"<<' ';
    int d,e,f;
    cin>>d>>e>>f;
    Triangle a(d,e,f);
    a.tf();
    return 0;
}
