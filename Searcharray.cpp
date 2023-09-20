#include<iostream>
using namespace std;
int searcharray(int array[],int size,int element);
int main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9,10,11};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int index,mynum;
    cout<<"Enter the element you wanna search for:";
        cin>>mynum;
    index=searcharray(numbers,size,mynum);
    if (index!=-1)
    {
        cout<<"\nINDEX IS:"<<index;
    }
    else
    {
        cout<<mynum<<" IS NOT IN THE ARRAY";
    }
    return 0;
}
int searcharray(int array[],int size,int element)
{
    for (int i=0;i<size;i++)
    {
        if(array[i]==element)
        {
            return i;
        }
    }
    return -1;
}