#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix : ";
    cin >> n;


    int matrix[10][10];
    cout << "Enter matrix :\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    cout << "The Matrix is : " <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cout << matrix[i][j] ;
        }
        cout << " " << endl;
    }

    bool symmetric = true;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
    {
        cout << "Symmetric Matrix";
    }
    else
    {
        cout << "Not Symmetric Matrix";
    }

    return 0;
}