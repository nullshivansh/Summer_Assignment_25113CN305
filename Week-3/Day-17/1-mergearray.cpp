#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter size of first array : ";
    cin >> size1;

    int arr1[100];
    cout << "Enter first array elements : ";
    for(int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array : ";
    cin >> size2;

    int arr2[100];
    cout << "Enter second array elements : ";
    for(int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
 
    // array 1
    cout<< "The entered array's are as follows:  " << endl;
    cout << "First Array is :" ;
    cout << "[";
    for (int i = 0; i < size1 ; i++)
    {
        cout <<  arr1[i] ;
        if(i != size1 + size2 - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    cout << " " << endl;

    // array 2
    cout << " Second Array is: ";
    cout << "[";
    for (int i = 0; i < size2 ; i++)
    {
        cout <<  arr2[i] ;
        if(i != size1 + size2 - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    cout << " " << endl;
    


    int merged[200];
    for(int i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++)
    {
        merged[size1 + i] = arr2[i];
    }

    cout << " The Merged Array Is : [";
    for(int i = 0; i < size1 + size2; i++)
    {
        cout << merged[i];
        if(i != size1 + size2 - 1)
        {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}