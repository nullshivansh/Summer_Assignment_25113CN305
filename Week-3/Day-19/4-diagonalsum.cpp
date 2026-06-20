#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter rows and columns : ";
    cin >> rows >> columns;

    int matrix[10][10];
    cout << "Enter matrix :\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout<< "The entered Matrix are as follows : " << endl;
    cout << "Matrix : " << endl;
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout <<  matrix[i][j] << " "; 
        }
        cout << endl;
    }


    int diagonalSum = 0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i == j)
            {
                diagonalSum += matrix[i][j];
            }
        }
    }
    cout << "The Diagonal Sum = " << diagonalSum;

    return 0;
}
