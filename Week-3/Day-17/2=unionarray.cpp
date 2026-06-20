#include <iostream>
using namespace std;

int main()
{
    int size1,size2;
    cout << "Enter size of first array : ";
    cin >> size1;

    int arr1[100];
    cout << "Enter first array elements : ";
    for(int i=0;i<size1;i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array : ";
    cin >> size2;
    int arr2[100];
    cout << "Enter second array elements : ";
    for(int i=0;i<size2;i++)
    {
        cin >> arr2[i];
    }

    
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


    int unionArray[200];
    int unionSize = 0;

    for(int i=0;i<size1;i++)
    {
        unionArray[unionSize++] = arr1[i];
    }

    for(int i=0;i<size2;i++)
    {
        bool found = false;

        for(int j=0;j<unionSize;j++)
        {
            if(arr2[i] == unionArray[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            unionArray[unionSize++] = arr2[i];
        }
    }

    cout << "Union Array : [";

    for(int i=0;i<unionSize;i++)
    {
        cout << unionArray[i];

        if(i != unionSize-1)
        {
            cout << ",";
        }
    }

    cout << "]";

    return 0;
}