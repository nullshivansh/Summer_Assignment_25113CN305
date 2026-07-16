#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;
    int transactionCount;

public:
    void createAccount()
    {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        transactionCount = 0;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    void deposit()
    {
        double amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            transactionCount++;
            cout << "Amount Deposited Successfully.\n";
        }
        else
        {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw()
    {
        double amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid Amount!\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!\n";
        }
        else
        {
            balance -= amount;
            transactionCount++;
            cout << "Withdrawal Successful.\n";
        }
    }

    void checkBalance()
    {
        cout << "Current Balance: ₹" << balance << endl;
    }

    void displayAccount()
    {
        cout << "\n----------------------------";
        cout << "\nAccount Number : " << accountNumber;
        cout << "\nAccount Holder : " << accountHolder;
        cout << "\nBalance        : ₹" << balance;
        cout << "\nTransactions   : " << transactionCount;
        cout << "\n----------------------------\n";
    }
};

int main()
{
    BankAccount accounts[100];
    int totalAccounts = 0;
    int choice, accNo;

    while (true)
    {
        cout << "\n===== BANK ACCOUNT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Display Account Details";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            accounts[totalAccounts].createAccount();
            totalAccounts++;
            break;

        case 2:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accounts[i].getAccountNumber() == accNo)
                {
                    accounts[i].deposit();
                    break;
                }
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accounts[i].getAccountNumber() == accNo)
                {
                    accounts[i].withdraw();
                    break;
                }
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accounts[i].getAccountNumber() == accNo)
                {
                    accounts[i].checkBalance();
                    break;
                }
            }
            break;

        case 5:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accounts[i].getAccountNumber() == accNo)
                {
                    accounts[i].displayAccount();
                    break;
                }
            }
            break;

        case 6:
            cout << "Thank You for Using the Banking System!\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}