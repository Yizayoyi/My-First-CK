#include <iostream>
using namespace std;
class student
{
private:
    string name,ban;
    int grade,sno;
public:
    student(string Name,string Ban,int Grade,int Sno)
    {
        name=Name;
        ban=Ban;
        grade=Grade;
        sno=Sno;
    }
    void print()
    {
        cout<<name<<' '<<ban<<' '<<grade<<' '<<sno<<endl;
    }
    void change()
    {
        int temp1,temp3;
        string temp2;
        cout<<"������Ҫ�޸��ĸ����ԣ�"<<endl;
        cout<<"1.name 2.ban 3.grade 4.sno"<<endl;
        cout<<"�����ż���:"<<endl;
        cin>>temp1;
        cout<<"�����޸�����:"<<endl;
        if(temp1==1)
        {
            cin>>temp2;
            name=temp2;
        }
        if(temp1==2)
        {
            cin>>temp2;
            ban=temp2;
        }
        if(temp1==3)
        {
            cin>>temp3;
            grade=temp3;
        }
        if(temp1==4)
        {
            cin>>temp3;
            sno=temp3;
        }
        cout<<"�޸ĳɹ�"<<endl;
    }
    void destory()
    {
        cout<<"��";
        cout<<"ɾ���ɹ�";
    }
     void display()
    {
        cout<<name<<' '<<ban<<' '<<grade<<' '<<sno<<endl;
    }
    void mark()
    {
        if(ban=="�ɲ�")
        {
            if(grade>=70&&grade<90)
                cout<<"����";
            if(grade>=90)
                cout<<"����";
            else
                cout<<"������";
        }
        else
        {
            if(grade>=60&&grade<80)
                cout<<"����";
            if(grade>=80)
                cout<<"����";
            else
                cout<<"������";
        }
    }
    ~student(){}
};
int main()
{
    student student1("������","�ɲ�",99,1);
    student1.print();
    student1.change();
    student1.display();
    student1.mark();
}
