#include<iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfCitizens;
    cout << "Enter number of citizens : ";
    cin >> numberOfCitizens;

    cin.ignore();
    int eligibleCount = 0;
    int notEligibleCount = 0;

    cout << "\n========== VOTING ELIGIBILITY SYSTEM ==========\n";

    for(int i = 1; i <= numberOfCitizens; i++)
    {
        string name;
        string nationality;
        char voterID;
        int age;

        cout << "\nCitizen " << i << endl;
        cout << "Enter Name : ";
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter Nationality : ";
        getline(cin, nationality);

        cout << "Do you have a Voter ID? (Y/N) : ";
        cin >> voterID;

        cin.ignore();

        cout << "\n---------- RESULT ----------\n";

        if(age >= 18 &&
           (voterID == 'Y' || voterID == 'y') && (nationality == "Indian" || nationality == "indian"))
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Nationality : " << nationality << endl;
            cout << "Status : Eligible to Vote" << endl;

            eligibleCount++;
        }
        else
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Nationality : " << nationality << endl;
            cout << "Status : Not Eligible to Vote" << endl;

            if(age < 18)
            {
                cout << "Years Left to Vote : " << 18 - age << endl;
            }

            if(!(voterID == 'Y' || voterID == 'y'))
            {
                cout << "Reason : Voter ID not available" << endl;
            }

            if(!(nationality == "Indian" || nationality == "indian"))
            {
                cout << "Reason : Not an Indian Citizen" << endl;
            }

            notEligibleCount++;
        }

        cout << "----------------------------\n";
    }

    cout << "\n========== FINAL REPORT ==========\n";

    cout << "Total Citizens Checked : " << numberOfCitizens << endl;
    cout << "Eligible Voters : " << eligibleCount << endl;
    cout << "Not Eligible Voters : " << notEligibleCount << endl;

    return 0;
}