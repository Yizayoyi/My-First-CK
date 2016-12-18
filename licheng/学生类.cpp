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
        cout<<"请问你要修改哪个属性？"<<endl;
        cout<<"1.name 2.ban 3.grade 4.sno"<<endl;
        cout<<"输入编号即可:"<<endl;
        cin>>temp1;
        cout<<"输入修改内容:"<<endl;
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
        cout<<"修改成功"<<endl;
    }
    void destory()
    {
        cout<<"无";
        cout<<"删除成功";
    }
     void display()
    {
        cout<<name<<' '<<ban<<' '<<grade<<' '<<sno<<endl;
    }
    void mark()
    {
        if(ban=="干部")
        {
            if(grade>=70&&grade<90)
                cout<<"及格";
            if(grade>=90)
                cout<<"优秀";
            else
                cout<<"不及格";
        }
        else
        {
            if(grade>=60&&grade<80)
                cout<<"及格";
            if(grade>=80)
                cout<<"优秀";
            else
                cout<<"不及格";
        }
    }
    ~student(){}
};
int main()
{
    student student1("王俊博","干部",99,1);
    student1.print();
    student1.change();
    student1.display();
    student1.mark();
}
