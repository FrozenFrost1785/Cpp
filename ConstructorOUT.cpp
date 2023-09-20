#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    int rno;
    char name[60];
    double fee;
    public:
    student();  //Default constructor
    void display();
};
student::student()
{
    cout<<"enter the rollno:";
        cin>>rno;
    cout<<"Enter the name:";
        cin>>name;
    cout<<"Enter the fee:";
        cin>>fee;
}
void student::display()
{
    cout<<endl<<rno<<' '<<name<<' '<<fee;
}
int main()
{
    student s;
    s.display();
    return 0;
}        
