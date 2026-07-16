#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    int op;

    cout << "===================================================\n";
    cout << "            WELCOME TO CALCULATOR SYSTEM\n";
    cout << "===================================================\n";

    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    do
    {
        cout << "\n===================================================\n";
        cout << "                    MENU\n";
        cout << "===================================================\n";

        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> op;

        switch(op)
        {
            case 1:
                cout << "Addition = " << a + b << endl;
                break;

            case 2:
                cout << "Subtraction = " << a - b << endl;
                break;

            case 3:
                cout << "Multiplication = " << a * b << endl;
                break;

            case 4:
                if(b != 0)
                    cout << "Division = " << a / b << endl;
                else
                    cout << "Division by zero not possible\n";
                break;

            case 5:
                cout << "Modulus = " << (int)a % (int)b << endl;
                break;

            case 6:
                cout << "Power = " << pow(a,b) << endl;
                break;

            case 7:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(op != 7);

    return 0;
}