// guessing unkown number game with 10 trials and tells the player wheather unkown is lower or higher
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num, trials;
    srand(time(0));
    int unkown = rand() % (100 + 1); // %n generate random value from (  0 to (n-1)  )
    for (trials = 1; trials <= 10; trials++)
    {
        cout << "Guess the number between 1 to 100\n";
        cin >> num;
        if (num == unkown)
        {
            cout << '\a' << "Correct Guess!\n";
            cout << "Number of trials : " << trials << endl;
            break;
        }
        else if (num > unkown)
        {
            cout << num << " is Greater.\n";
            cout << "Number of trials left : " << 10 - trials << endl;
        }
        else
        {
            cout << num << " is smaller.\n";
            cout << "Number of trials left : " << 10 - trials << endl;
        }
    }
    if (num != unkown)
        cout << endl << '\a' << trials - 1 << " trials used try again.\n";

    return 0;
}