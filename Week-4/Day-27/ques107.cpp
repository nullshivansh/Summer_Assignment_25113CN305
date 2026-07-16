#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empID;
    string name;
    float basicSalary;
    float bonus;
    float deduction;
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

    cout << "Enter Basic Salary : ";
    cin >> employees[totalEmployees].basicSalary;

    cout << "Enter Bonus : ";
    cin >> employees[totalEmployees].bonus;

    cout << "Enter Deduction : ";
    cin >> employees[totalEmployees].deduction;

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

    cout << "\n========== EMPLOYEE SALARY RECORDS ==========\n";

    for(int i = 0; i < totalEmployees; i++)
    {
        float netSalary =
            employees[i].basicSalary +
            employees[i].bonus -
            employees[i].deduction;

        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID   : " << employees[i].empID << endl;
        cout << "Name          : " << employees[i].name << endl;
        cout << "Basic Salary  : Rs. " << employees[i].basicSalary << endl;
        cout << "Bonus         : Rs. " << employees[i].bonus << endl;
        cout << "Deduction     : Rs. " << employees[i].deduction << endl;
        cout << "Net Salary    : Rs. " << netSalary << endl;

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
            float netSalary =
                employees[i].basicSalary + employees[i].bonus - employees[i].deduction;

            cout << "\n========== EMPLOYEE FOUND ==========\n";

            cout << "Employee ID : " << employees[i].empID << endl;
            cout << "Name        : " << employees[i].name << endl;
            cout << "Basic Salary: Rs. " << employees[i].basicSalary << endl;
            cout << "Bonus       : Rs. " << employees[i].bonus << endl;
            cout << "Deduction   : Rs. " << employees[i].deduction << endl;
            cout << "Net Salary  : Rs. " << netSalary << endl;

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
        cout << "      SALARY MANAGEMENT SYSTEM\n";
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