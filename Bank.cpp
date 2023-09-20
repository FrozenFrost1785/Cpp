#include <iostream>
#include<iomanip>   //to set precision to floating point numbers
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        cout << "\n*************************" << endl;
        cout << "Enter your choice" << endl;
        cout << "(1)Deposit" << endl;
        cout << "(2)Withdraw" << endl;
        cout << "(3)Show Balance" << endl;
        cout << "(4)Exit" << endl;
        cout << ">>";
            cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Deposit selected" << endl;
            balance += deposit();
            showBalance(balance);
            break;
        case 2:
            cout << "Withdraw selected" << endl;
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 3:
            cout << "Current Balance Selected" << endl;
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting" << endl;
            break;
        default:
            cout << "INVALID" << endl;
            break;
        }
    }
    while(choice!=4);
}

void showBalance(double balance)
{
    cout<<"Your current Balance is: $ "<< setprecision(2)<<fixed<<balance<<endl;            //setprecision(2)-sets decimal precision to 2 places followed by fixed func
}
double deposit()
{   
    double deposit;
    cout<<"Enter the amount to deposit: $ ";
            cin>>deposit;
    if (deposit < 0)
    {
        cout<<"*** Enter a proper amount ***"<<endl;
        return 0;
    }
    else
    {
        return deposit;
    }
}
double withdraw(double balance)
{
    double withdraw;
    cout<<"Enter the amount to withdraw: $ ";
        cin>>withdraw;
    if (withdraw>balance)
    {
        cout<<"*** INSUFFICIENT BALANCE ***"<<endl;
        return 0;
    }
    else if (withdraw < 0 )
    {
        cout<<"*** Enter a valid amount ***"<<endl;
        return 0;
    }
    else
    {
        cout<<"!!! Withdrawl Success !!!"<<endl;
        return withdraw;
    }
}