#include<stack>
#include<iostream>
using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        stack<char> b;
        int flog=1;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==')')
            {
                if(!b.empty())
                {
                    if(b.top()=='(')
                        b.pop();
                }
                else
                {
                    flog=0;
                    break;
                }
            }
            else
            if(a[i]=='}')
                {
                    if(!b.empty())
                    {
                        if(b.top()=='{')
                            b.pop();
                    }
                    else
                    {
                        flog=0;
                        break;
                    }
                }
            else
            if(a[i]==']')
            {
                if(!b.empty())
                {
                    if(b.top()=='[')
                    b.pop();
                }

               else
               {
                    flog=0;
                    break;
               }
            }
        else
            b.push(a[i]);
       }
        if(!b.empty())
            flog=0;
        if(flog)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}


