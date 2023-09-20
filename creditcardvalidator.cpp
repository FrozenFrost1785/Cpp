/*Luhn Algorithm
1.Double every second digit from right to left, if doubled number is 2 digit no split it into individual digits 
2.Add all single digit numbers from step 1
3.Add all odd no digit from right to left
4.sum the o/p from 2 and 3
5.If no is divisible by 10 it is a valid no  */
#include<iostream>
#include<string>
using namespace std;
int getdigit(int number);
int sumodd(string card);
int sumeven(string card);
int main()
{   
    string card;
    int result=0;
    cout<<"Enter a credit card number:";
        cin>>card;
    result=sumodd(card)+sumeven(card);
    if(result%10==0)
    {
        cout<<"\nIt is valid number";
    }
    else
    {
        cout<<"\nIt is not a valid no";
    }
    return 0;
}
int getdigit(int number)
{   

    return number%10+(number/10 % 10);
}
int sumodd(string card)
{
    int sum=0;
    for(int i=card.size()-1;i>=0;i-=2)
    {
        sum+=getdigit(card[i]-'0');
    }
    return sum;
}
int sumeven(string card)
{
    int sum=0;
    for(int i=card.size()-2;i>=0;i-=2)
    {
        sum+=getdigit((card[i]-'0')*2);
    }
    return sum;
}