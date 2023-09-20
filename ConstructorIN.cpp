#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    int rno;
    char name[60];
    double fee;
    public:
    student()  //Default constructor
    {
        cout<<"enter the rollno:";
            cin>>rno;
        cout<<"Enter the name:";
            cin>>name;
        cout<<"Enter the fee:";
            cin>>fee;
    }
    void display()
    {
        cout<<endl<<rno<<' '<<name<<' '<<fee;
    }
};
int main()
{
    student s1,s2,s3;   //constructor is called automatically when we create a object
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
        
