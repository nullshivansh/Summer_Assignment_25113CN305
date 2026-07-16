#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter size of first sorted array : ";
    cin >> n1;

    int arr1[100];
    cout << "Enter first sorted array : ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array : ";
    cin >> n2;
    int arr2[100];

    cout << "Enter second sorted array : ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "The Entered Sorted Arrays Are As Follows :" << endl;
    cout << "First ARRAY : [";
    for (int i = 0; i < n1 ; i++)
    {
        cout << arr1[i] ;
        if(i != n1 - 1)
        {
            cout << ",";
        }
    }
    cout  << "]" << endl;

    cout << "Second ARRAY : [ ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr2[i];
        if(i != n2- 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;

    int merged[200];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1)
    {
        merged[k++] = arr1[i++];
    }

    while(j < n2)
    {
        merged[k++] = arr2[j++];
    }

    cout << "The Merged Array : [";
    for(int i = 0; i < k; i++)
    {
        cout << merged[i];

        if(i != k - 1)
        {
            cout << ",";
        }
    }

    cout << "]";

    return 0;
}