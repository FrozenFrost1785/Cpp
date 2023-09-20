/*#include<iostream>
using namespace std;
int main()
{
    string foods[5];
    int size;
    string temp;
    size=sizeof(foods)/sizeof(foods[0]);
    for(int i=0;i<size;i++)
    {   
        cout<<"Enter the food you like # "<<i+1<<"or Q to quit:";
            getline(cin,temp);
            if(temp=="Q")
            {
                break;
            }
            else
            {
                foods[i]=temp;
            }
    }
    cout<<"Your choices"<<endl;
    for(int i=0;!foods[i].empty();i++)
    {
        cout<<foods[i]<<endl;
    }
    return 0;
}*/



//MULTIDIMENSIONAL ARRAYS
/*
#include<iostream>
using namespace std;
int main()
{
    string cars[][3]={{"MUSTANG","ESCAPE","GT"},
                        {"CAMARO","EQUINOX","CORVETTE"},
                        {"GTB","M4","M5"}};//2D arrys [rows][columns]
    int rows=sizeof(cars)/sizeof(cars[0]);
    int columns=sizeof(cars[0])/sizeof(cars[0][0]);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<cars[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}*/

//pointers-a pointer is just a variable which stores the memory addresses of a variable
//& address of operator
//* derefernce operator
//arrays dont need &operator as it is already an address
//int a=5;
//int *pA=&a;
//nullpointer-is a pointer that holds a null value can be assigned value later it is given by nullptr keyword
//int pointer=nullptr;
//dynamic memory-memory allocated when a program is running
//new keyord
