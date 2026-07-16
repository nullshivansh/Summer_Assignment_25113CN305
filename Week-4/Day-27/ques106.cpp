#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empID;
    string name;
    int age;
    float salary;
    string department;
    string position;
    string contact;
};

Employee employees[100];
int totalEmployees = 0;

void addEmployee()
{
    if(totalEmployees >= 100)
    {
        cout << "\nEmployee Record Full!\n";
        return;
    }

    cout << "\n========== ADD EMPLOYEE ==========\n";

    cout << "Enter Employee ID : ";
    cin >> employees[totalEmployees].empID;

    cin.ignore();
    cout << "Enter Employee Name : ";
    getline(cin, employees[totalEmployees].name);
    cout << "Enter Age : ";
    cin >> employees[totalEmployees].age;
    cout << "Enter Salary : ";
    cin >> employees[totalEmployees].salary;

    cin.ignore();
    cout << "Enter Department : ";
    getline(cin, employees[totalEmployees].department);
    cout << "Enter Position : ";
    getline(cin, employees[totalEmployees].position);
    cout << "Enter Contact Number : ";
    getline(cin, employees[totalEmployees].contact);

    totalEmployees++;
    cout << "\nEmployee Added Successfully!\n";
}

void viewEmployees()
{
    if(totalEmployees == 0)
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for(int i = 0; i < totalEmployees; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << employees[i].empID << endl;
        cout << "Name        : " << employees[i].name << endl;
        cout << "Age         : " << employees[i].age << endl;
        cout << "Salary      : Rs. " << employees[i].salary << endl;
        cout << "Department  : " << employees[i].department << endl;
        cout << "Position    : " << employees[i].position << endl;\
        cout << "Contact     : " << employees[i].contact << endl;
        cout << "-----------------------------------\n";
    }
}

void searchEmployee()
{
    if(totalEmployees == 0)
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    int searchID;
    bool found = false;

    cout << "\nEnter Employee ID to Search : ";
    cin >> searchID;

    for(int i = 0; i < totalEmployees; i++)
    {
        if(employees[i].empID == searchID)
        {
            cout << "\nEmployee Found!\n";
            cout << "Employee ID : " << employees[i].empID << endl;
            cout << "Name        : " << employees[i].name << endl;
            cout << "Age         : " << employees[i].age << endl;
            cout << "Salary      : Rs. " << employees[i].salary << endl;
            cout << "Department  : " << employees[i].department << endl;
            cout << "Position    : " << employees[i].position << endl;
            cout << "Contact     : " << employees[i].contact << endl;

            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout << "\nEmployee Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "     EMPLOYEE MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                viewEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                cout << "\nThank You For Using The System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}