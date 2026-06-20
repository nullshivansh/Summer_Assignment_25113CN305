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

    cout << "The Entered Matrix is : "<< endl;
    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            cout << matrix[i][j];
        }
        cout << " " << endl;
    }

    cout << "\nColumn Wise Sum:\n";
    for(int j=0;j<columns;j++)
    {
        int sum = 0;

        for(int i=0;i<rows;i++)
        {
            sum += matrix[i][j];
        }
        cout << "Column " << j+1 << " Sum = " << sum << endl;
    }

    return 0;
}