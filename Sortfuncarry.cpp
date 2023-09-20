#include<iostream>
using namespace std;
void sortof(int array[],int size);
int main()
{
    int num[]={11,5,4,6,7,8,2,3,20};
    int size=sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<' ';
    }
    sortof(num,size);
    cout<<'\n';
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<' ';
    }
    return 0;
}
void sortof(int array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }   
        }
    }

}