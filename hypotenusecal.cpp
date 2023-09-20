#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    double a,b,c;
    cout<<"Enter side 1:";
        cin>>a;
    cout<<"Enter side 2:";
        cin>>b;
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    cout<<"hypotenuse is:"<<c;
    return 0;
}