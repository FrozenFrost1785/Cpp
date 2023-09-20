#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex()
    {
        x=0;
        y=0;
    }
    friend void operator>>(complex &a,complex &b)
    {
        cout<<"Enter the integer part of the 1st no:";
            cin>>a.x;
        cout<<"Enter the imaginary part of the 1st no:";
            cin>>a.y;
        cout<<"Enter the integer part of the 2nd no:";
            cin>>b.x;
        cout<<"Enter the imaginary part of the 2nd no:";
            cin>>b.y;
    }
    friend void operator<<(complex &a,complex &b)
    {
        cout<<"1st complex no:"<<"("<<a.x<<")+("<<a.y<<"i)"<<endl;
        cout<<"2nd complex no:"<<"("<<b.x<<")+("<<b.y<<"i)"<<endl;
    }
    friend void operator+(complex &a,complex &b)
    {
        complex add;
        add.x=a.x+b.x;
        add.y=a.y+b.y;
        cout<<"ADDITION IS:"<<"("<<add.x<<")+("<<add.y<<"i)";
    }
    friend void operator-(complex &a,complex &b)
    {
        complex sub;
        sub.x=a.x-b.x;
        sub.y=a.y-b.y;
        cout<<"SUBTRACTION IS:"<<"("<<sub.x<<")+("<<sub.y<<"i)";
    }
    friend void operator*(complex &a,complex &b)
    {
        complex pro;
        pro.x=a.x*b.x-a.y*b.y;
        pro.y=a.x*b.y+a.y*b.x;
        cout<<"MULTIPLICATION IS:"<<"("<<pro.x<<")+("<<pro.y<<"i)";
    }
};
int main()
{   
    int choice;
    char disc;
    complex s1,s2;
    do
    {   
        cout<<"**************Complex Functions****************"<<endl;
        operator>>(s1,s2);
        operator<<(s1,s2);
        cout<<"Choose which operation do you wanna perform(1/2/3)"<<endl;
        cout<<"ADDITION(1)"<<endl;
        cout<<"SUBTRACTION(2)"<<endl;
        cout<<"MULTIPLICATION(3)"<<endl;
        cout<<">>>";
            cin>>choice;
        switch (choice)
        {
            case 1:
                s1+s2;
                break;
            
            case 2:
                s1-s2;
                break;

            case 3:
                s1*s2;
                break;
            
            default:
                cout<<"INVALID CHOICE"<<endl;
                break;
        }
    cout<<"\nDO YOU WANNA CONTINUE?(Y/N):";
        cin>>disc;
    }
    while(disc!='N');
    cout<<"*****************END*******************";
    return 0;
}