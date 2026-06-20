#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter Number of rows and columns You want  : ";
    cin >> rows >> columns;

    int matrix1[10][10];
    int matrix2[10][10];
    int subtract[10][10];

    cout << "Enter first matrix :\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter second matrix :\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> matrix2[i][j];
        }
    }
    
    cout<< "The entered Matrix's are as follows : " << endl;
    cout << "Matrix 1 : " << endl;
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout <<  matrix1[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "Matrix 2 :" << endl ;
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<  matrix2[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            subtract[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "\n The Subtraction Matrix Is :\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout << subtract[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}