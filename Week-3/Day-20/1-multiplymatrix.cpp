#include <iostream>
using namespace std;

int main()
{

    int rows, columns;
    cout << "enter the numbers of rows and columns you want in oth matrix";
    cin >> rows >> columns;

    int matrix1[100][100];
    int matrix2[100][100];
    int multiply[100][100];


    cout << "enter the elements of first matrix :";
    for (int i = 0; i < rows; i++)
    {
        for ( int j = 0; j < columns ; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << " " << endl;

    cout << "enter the elements of secomd matrix :";
    for (int i = 0; i < rows ; i++)
    {
        for ( int j = 0; j < columns ; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout<< "the entered matrix's are as follows " << endl;
    cout << "The First Matrix is : " <<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < columns; j++)
        {
            cout << matrix1[i][j] ;
        }
        cout << " " << endl;
    }

    cout<< "The Second Matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < columns ; j++)
        {
            cout << matrix2[i][j] ; 
        }
        cout << " " << endl;
    }

    for (int  i = 0; i < rows ; i++)
    {
        for (int  j  = 0; j < columns ; j++)
        {
            multiply[i][j] = 0;
            for (int k = 0; k  < columns ; k++)
            {
                multiply[i][j] = multiply[i][j] + matrix1[i][k] * matrix2[k][j];
            }
            
        }
        
    }

    cout << "The Multiplicxation Of The Matrix is : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            cout << multiply[i][j]  << " ";
        }
        cout << " " <<  endl;
    }

    return 0;

}