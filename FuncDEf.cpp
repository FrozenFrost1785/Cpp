#include<iostream>
#include<string>
void hello()
{
        std::cout<<"HELLO";
}
void outdef();
void param(std::string name,int age);
int main()
{
        std::string name;
        int age;
        hello();
        outdef();
        std::cin>>name;
        std::cin>>age;
        param(name,age);
        return 0;
}
void outdef()
{
    std::cout<<"This is how you define func after main func";
}
void param(std::string name,int age)
{
        //parameter func
        std::cout<<name;
        std::cout<<age;
}