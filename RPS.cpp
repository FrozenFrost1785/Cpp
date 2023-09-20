#include <iostream>
#include <ctime>
using namespace std;
char userChoice();
char compChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main()
{
    char disc;
    do
    {
        char player, computer;
        player = userChoice();
        cout << "Your Choice:";
        showChoice(player);

        computer = compChoice();
        cout << "\nComp Choice:";
        showChoice(computer);

        chooseWinner(player, computer);
        cout << "\nPLAY AGAIN(Y/N):";
        cin >> disc;
    } while (disc != 'N');
    return 0;
}

char userChoice()
{
    char player;
    cout << "********Rock-Paper-Scissor***********" << endl;
    do
    {
        cout << "*********************";
        cout << "\nChoose";
        cout << "\n'r' for Rock";
        cout << "\n'p'for Paper";
        cout << "\n's' for Scissor";
        cout << "\n>>>";
        cin >> player;
    } while (player != 'r' && player != 's' && player != 'p');
    return player;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "\nRock";
        break;
    case 'p':
        cout << "\nPaper";
        break;
    case 's':
        cout << "\nScissor";
        break;
    }
}

char compChoice()
{
    srand(time(NULL));
    int num;
    num = (rand() % 3) + 1;
    switch (num)
    {
    case 1:
        return 'r'; // no break statements as return also breaks by giving the value
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "\nIts a tie";
        }
        else if (computer == 'p')
        {
            cout << "\nYou lose";
        }
        else
            cout << "\nYou Won";
        break;
    case 'p':
        if (computer == 'p')
        {
            cout << "\nIts a tie";
        }
        else if (computer == 's')
        {
            cout << "\nYou lose";
        }
        else
        {
            cout << "\nYou Won";
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "\nIts a Tie";
        }
        else if (computer == 'r')
        {
            cout << "\nYou lose";
        }
        else
        {
            cout << "\nYou Won";
        }
        break;
    }
}