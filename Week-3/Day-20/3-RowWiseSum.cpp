#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout << "enter the number and columns you want to add :";
    cin >> rows >> columns ;

    int matrix[100][100];
    cout << "enter the elements in the matrix : " << endl;
    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < columns ; j++)
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


     cout << "\nThe Row Wise Sum:\n";

    for(int i=0;i<rows;i++)
    {
        int sum = 0;
        for(int j=0;j<columns;j++)
        {
            sum += matrix[i][j];
        }

        cout << "Row "  << i+1 << " Sum = "<< sum << endl;
    }

    return 0;
}