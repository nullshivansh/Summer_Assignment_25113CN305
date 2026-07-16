#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    int pin = 1234;
    int enteredPin;
    double balance = 10000.0;
    double amount;
    int choice;
    int deposits = 0;
    int withdrawals = 0;
    double lastTransaction = 0;
    bool accessGranted = false;

    cout << "=====================================\n";
    cout << "      ATM MANAGEMENT SYSTEM\n";
    cout << "=====================================\n\n";

    cout << "Enter Account Holder Name : ";
    getline(cin, userName);

    cout << "\n========== LOGIN ==========\n";
    for(int attempts = 5; attempts >= 1; attempts--)
    {
        cout << "Enter ATM PIN : ";
        cin >> enteredPin;
        if(enteredPin == pin)
        {
            accessGranted = true;
            cout << "\nLogin Successful!\n";
            break;
        }
        else
        {
            cout << "\nIncorrect PIN!\n";

            if(attempts > 1)
            {
                cout << "Attempts Left : " << attempts - 1 << "\n\n";
            }
        }
    }

    if(!accessGranted)
    {
        cout << "\nAccount Locked!";
        cout << "\nToo Many Wrong Attempts.\n";
        return 0;
    }

    do
    {
        cout << "\n=====================================\n";
        cout << "               ATM MENU\n";
        cout << "=====================================\n";

        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change PIN\n";
        cout << "5. Account Summary\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nCurrent Balance = Rs. "
                     << balance << endl;
                break;
            }
            case 2:
            {
                cout << "\nEnter Deposit Amount : ";
                cin >> amount;

                if(amount <= 0)
                {
                    cout << "Invalid Amount!\n";
                }
                else
                {
                    balance = balance + amount;
                    deposits++;
                    lastTransaction = amount;

                    cout << "\nDeposit Successful!\n";

                    cout << "Updated Balance = Rs. " << balance << endl;
                }

                break;
            }

            case 3:
            {
                cout << "\nEnter Withdrawal Amount : ";
                cin >> amount;

                if(amount <= 0)
                {
                    cout << "Invalid Amount!\n";
                }
                else if(amount > balance)
                {
                    cout << "Insufficient Balance!\n";
                }
                else
                {
                    balance -= amount;
                    withdrawals++;
                    lastTransaction = -amount;

                    cout << "\nWithdrawal Successful!\n";
                    cout << "Remaining Balance = Rs. " << balance << endl;
                }

                break;
            }

            case 4:
            {
                int newPin;
                cout << "\nEnter New PIN : ";
                cin >> newPin;
                pin = newPin;
                cout << "PIN Changed Successfully!\n";
                break;
            }

            case 5:
            {
                cout << "\n=====================================\n";
                cout << "          ACCOUNT SUMMARY\n";
                cout << "=====================================\n";

                cout << "Account Holder : " << userName << endl;
                cout << "Current Balance : Rs. " << balance << endl;
                cout << "Total Deposits : " << deposits << endl;
                cout << "Total Withdrawals : " << withdrawals  << endl;
                cout << "Last Transaction : ";

                if(lastTransaction > 0)
                {
                    cout << "+Rs. " << lastTransaction << endl;
                }
                else if(lastTransaction < 0)
                {
                    cout << "-Rs. " << -lastTransaction << endl;
                }
                else
                {
                    cout << "No Transactions Yet" << endl;
                }

                break;
            }

            case 6:
            {
                cout << "\nThank You For Using Our ATM.\n";
                cout << "Have a Nice Day, " << userName<< endl;
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
        }

    } while(choice != 6);

    return 0;
}