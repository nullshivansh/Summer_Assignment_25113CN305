#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float maths;
    float physics;
    float chemistry;
    float english;
    float computer;
};

Student students[100];
int totalStudents = 0;

void addStudent()
{
    if(totalStudents >= 100)
    {
        cout << "\nRecord Full!\n";
        return;
    }

    cout << "\n========== ADD STUDENT ==========\n";

    cout << "Enter Roll Number : ";
    cin >> students[totalStudents].rollNo;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, students[totalStudents].name);

    cout << "Enter Maths Marks : ";
    cin >> students[totalStudents].maths;

    cout << "Enter Physics Marks : ";
    cin >> students[totalStudents].physics;

    cout << "Enter Chemistry Marks : ";
    cin >> students[totalStudents].chemistry;

    cout << "Enter English Marks : ";
    cin >> students[totalStudents].english;

    cout << "Enter Computer Marks : ";
    cin >> students[totalStudents].computer;

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

void generateMarksheet()
{
    if(totalStudents == 0)
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    int roll;
    bool found = false;

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    for(int i = 0; i < totalStudents; i++)
    {
        if(students[i].rollNo == roll)
        {
            found = true;

            float total =
            students[i].maths + students[i].physics + students[i].chemistry + students[i].english + students[i].computer;
            float percentage = total / 5;

            string grade;
            if(percentage >= 90)
                grade = "A+";
            else if(percentage >= 80)
                grade = "A";
            else if(percentage >= 70)
                grade = "B";
            else if(percentage >= 60)
                grade = "C";
            else if(percentage >= 50)
                grade = "D";
            else
                grade = "F";

            cout << "\n=====================================\n";
            cout << "            MARKSHEET\n";
            cout << "=====================================\n";

            cout << "Roll Number : " << students[i].rollNo << endl;
            cout << "Name        : " << students[i].name << endl;
            cout << "\nMarks Obtained\n";
            cout << "Maths      : " << students[i].maths << endl;
            cout << "Physics    : "<< students[i].physics << endl;
            cout << "Chemistry  : " << students[i].chemistry << endl;
            cout << "English    : " << students[i].english << endl;
            cout << "Computer   : " << students[i].computer << endl;

            cout << "\nTotal Marks : "<< total<< "/500" << endl;
            cout << "Percentage  : " << percentage << "%" << endl;

            cout << "Grade       : "  << grade << endl;

            if(percentage >= 33 )
            {
                cout << "Result      : PASS" << endl;
            }
            else
            {
                cout << "Result      : FAIL" << endl;
            }
            if(percentage >= 80)
            {
                cout << "Result      : PASS WITH DISTINCTION" << endl;
            }

            cout << "=====================================\n";

            break;
        }
    }

    if(found == false)
    {
        cout << "\nStudent Not Found!\n";
    }
}

void viewStudents()
{
    if(totalStudents == 0)
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n========== STUDENT LIST ==========\n";

    for(int i = 0; i < totalStudents; i++)
    {
        cout << students[i].rollNo << " - " << students[i].name << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "      MARKSHEET GENERATION SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Add Student\n";
        cout << "2. Generate Marksheet\n";
        cout << "3. View Students\n";
        cout << "4. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                generateMarksheet();
                break;

            case 3:
                viewStudents();
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}