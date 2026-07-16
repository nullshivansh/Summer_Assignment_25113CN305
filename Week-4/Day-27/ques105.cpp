#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct Student
{
    int rollNo;
    string name;
    int age;
    float marks[5];
    float percentage;
    string grade;
};

Student students[MAX];
int totalStudents = 0;

void calculateResult(Student &s)
{
    float total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += s.marks[i];
    }

    s.percentage = total / 5;

    if (s.percentage >= 90)
        s.grade = "A";
    else if (s.percentage >= 75)
        s.grade = "B";
    else if (s.percentage >= 60)
        s.grade = "C";
    else if (s.percentage >= 40)
        s.grade = "D";
    else
        s.grade = "Fail";
}

void addStudent()
{
    if (totalStudents >= MAX)
    {
        cout << "\nRecord Full!\n";
        return;
    }

    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == s.rollNo)
        {
            cout << "Roll Number Already Exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Marks of 5 Subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }

    calculateResult(s);

    students[totalStudents] = s;
    totalStudents++;
    cout << "\nStudent Added Successfully!\n";
}

void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n========== STUDENT RECORDS ==========\n";
    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nRoll Number : " << students[i].rollNo;
        cout << "\nName        : " << students[i].name;
        cout << "\nAge         : " << students[i].age;
        cout << "\nPercentage  : " << students[i].percentage << "%";
        cout << "\nGrade       : " << students[i].grade;
        cout << "\n----------------------------------";
    }
}

void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll Number : " << students[i].rollNo << endl;
            cout << "Name        : " << students[i].name << endl;
            cout << "Age         : " << students[i].age << endl;
            cout << "Percentage  : " << students[i].percentage << "%" << endl;
            cout << "Grade       : " << students[i].grade << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void updateStudent()
{
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Marks:\n";

            for (int j = 0; j < 5; j++)
            {
                cout << "Subject " << j + 1 << ": ";
                cin >> students[i].marks[j];
            }

            calculateResult(students[i]);

            cout << "\nRecord Updated Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void deleteStudent()
{
    int roll;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            for (int j = i; j < totalStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }

            totalStudents--;

            cout << "\nRecord Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void classStatistics()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Records Available!\n";
        return;
    }

    float highest = students[0].percentage;
    float lowest = students[0].percentage;
    float sum = 0;

    string topper = students[0].name;

    for (int i = 0; i < totalStudents; i++)
    {
        sum += students[i].percentage;

        if (students[i].percentage > highest)
        {
            highest = students[i].percentage;
            topper = students[i].name;
        }

        if (students[i].percentage < lowest)
        {
            lowest = students[i].percentage;
        }
    }

    cout << "\n===== CLASS STATISTICS =====\n";
    cout << "Total Students : " << totalStudents << endl;
    cout << "Average Marks  : " << sum / totalStudents << "%" << endl;
    cout << "Highest Marks  : " << highest << "%" << endl;
    cout << "Lowest Marks   : " << lowest << "%" << endl;
    cout << "Topper         : " << topper << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Class Statistics\n";
        cout << "0. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            classStatistics();
            break;

        case 0:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}