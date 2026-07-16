#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));
    int choice;
    int maxRange;

    cout << "   NUMBER GUESSING GAME\n";

    cout << "\nSelect Difficulty Level\n";
    cout << "1. Easy (1 - 50)\n";
    cout << "2. Medium (1 - 100)\n";
    cout << "3. Hard (1 - 500)\n";

    cout << "\nEnter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            maxRange = 50;
            break;

        case 2:
            maxRange = 100;
            break;

        case 3:
            maxRange = 500;
            break;

        default:
            cout << "Invalid Choice!\n";
            return 0;
    }

    int secretNumber = rand() % maxRange + 1;

    int guess;
    int attempts = 0;

    cout << "\nI have selected a number between 1 and "
         << maxRange << ".\n";

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if(guess > secretNumber)
        {
            cout << "Too High!\n";
        }
        else if(guess < secretNumber)
        {
            cout << "Too Low!\n";
        }
        else
        {
            cout << "\nCorrect Guess!\n";
            cout << "You found the number in "
                 << attempts << " attempts.\n";
        }

    } while(guess != secretNumber);

    int score = 100 - (attempts * 5);

    if(score < 0)
        score = 0;

    cout << "Your Score: " << score << "/100\n";
    cout << "\nThanks for Playing!\n";

    return 0;
}