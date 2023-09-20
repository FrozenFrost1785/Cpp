#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    char choice;
    do
    {
        cout << "*********TEMPERATURE CONVERSION**********\n";
        cout << "F-Farenheit C-Celsius\n";
        cout << "What unit you wanna convert to ?\n";
        cin >> unit;
        switch (unit)
        {
        case 'C':
            cout << "Enter your temperatue in F:";
            cin >> temp;
            temp = (temp - 32.0) / 1.8;
            cout << "Your temperature in C is " << temp << " C " << endl;
            break;

        case 'F':
            cout << "Enter your temperatue in C:";
            cin >> temp;
            temp = (temp * 1 / 8) + 32.0;
            cout << "Your temperature in F is " << temp << " F " << endl;
            break;

        default:
            cout << "THAT OPTION IS NOT YET AVAIALBLE";
        }
        cout << "********************";
        cout << "STILL WANNA CONTINUE(Y/N):";
            cin>>choice;
    }
    while(choice=='Y');
    return 0;
}