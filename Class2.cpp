#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float marks1,percent,marks2,marks3;
    char grade;
    void insert()
    {
        cout<<"Enter your name:";
            cin>>name;
        cout<<"Enter your roll no:";
            cin>>roll;
        cout<<"Enter your marks in sub1(MATH):";
            cin>>marks1;
        cout<<"Enter your marks in sub2(ENG):";
            cin>>marks2;
        cout<<"Enter your marks in sub3(SCI):";
            cin>>marks3;
        percent=(marks1+marks2+marks3)/3;
    }
    void result()
    {

        if (percent>=80)
        {
            grade='O';
        }
        else if(percent>60 && percent<80)
        {
            grade='A';
        }
        else if(percent>50 && percent<60)
        {
            grade='B';
        }
        else
        {
            grade='F';
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<" Roll no: "<<roll<<" Percent: "<<percent<<"%"<<" Grade:"<<grade<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.insert();
    s2.insert();
    s3.insert();
    s1.display();
    s2.display();
    s3.display();
    s1.result();
    s2.result();
    s3.result();
    return 0;
}