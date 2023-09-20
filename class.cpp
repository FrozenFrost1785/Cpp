#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float m1,m2,m3;
    float percent;
    void insert()
    {
        cout<<"ENTER NAME:";
        cin>>name;
        cout<<"ENTER ROLL:";
        cin>>roll;
        cout<<"ENTER MARKS in sub M:";
        cin>>m1>>m2>>m3;
    }
    void display()
    {
        percent=(m1+m2+m3)*100/300;
        cout<<name<<" "<<roll<<" "<<percent<<" %"<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.insert();
    s1.display();
    s2.insert();
    s2.display();
    s3.insert();
    s3.display();
    return 0;
}