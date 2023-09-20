#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    cout<<"****************NUMBER GUESSING GAME***************"<<endl;
    int guess,random,tries=0;
    srand(time(0));
    random=(rand()%100)+1;
    cout<<"************YOU HAVE unlimited TRIES GOOD LUCK***********"<<endl;
    do
    {
        cout<<"Your guess(1/100) :";
            cin>>guess;
        tries+=1;
        if (guess>random)
        {
            cout<<"ITS SMALLER"<<endl;
        }
        else if (guess<random)
        {
            cout<<"ITS LARGER"<<endl;
        }   
        else
        {
            cout<<"DAMN ITS CLOSED. No of tries: "<<tries<<endl;
        } 
    }
    while(guess!=random);
    return 0;
}