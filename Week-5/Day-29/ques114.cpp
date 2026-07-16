#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int op;

    cout << "=================================================\n";
    cout << "       WELCOME TO ARRAY OPERATIONS SYSTEM\n";
    cout << "=================================================\n";

    cout << "Enter Size of Array : ";
    cin >> n;
    cout << "Enter " << n << " Elements : ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n=================================================\n";
        cout << "               ARRAY OPERATIONS MENU\n";
        cout << "=================================================\n";

        cout << "1. Sum & Average\n";
        cout << "2. Largest & Smallest\n";
        cout << "3. Count Even & Odd\n";
        cout << "4. Linear Search\n";
        cout << "5. Reverse Array\n";
        cout << "6. Bubble Sort\n";
        cout << "7. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> op;

        switch(op)
        {
            case 1:
            {
                int sum = 0;
                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                float average = (float)sum / n;

                cout << "\nSum = " << sum << endl;
                cout << "Average = " << average << endl;

                break;
            }

            case 2:
            {
                int largest = arr[0];
                int smallest = arr[0];

                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }

                    if(arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }

                cout << "\nLargest Element = " << largest << endl;
                cout << "Smallest Element = " << smallest << endl;

                break;
            }

            case 3:
            {
                int even = 0;
                int odd = 0;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] % 2 == 0)
                    {
                        even++;
                    }
                    else
                    {
                        odd++;
                    }
                }

                cout << "\nEven Elements = " << even << endl;
                cout << "Odd Elements = " << odd << endl;

                break;
            }

            case 4:
            {
                int key;
                bool found = false;

                cout << "\nEnter Element To Search : ";
                cin >> key;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element Found At Index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    cout << "Element Not Found\n";
                }

                break;
            }

            case 5:
            {
                cout << "\nReversed Array : [";
                for(int i = n - 1; i >= 0; i--)
                {
                    cout << arr[i];
                    if(i != 0)
                    {
                        cout << ",";
                    }
                }
                cout << "]\n";

                break;
            }

            case 6:
            {
                for(int i = 0; i < n - 1; i++)
                {
                    for(int j = 0; j < n - i - 1; j++)
                    {
                        if(arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }

                cout << "\nSorted Array : [";
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i];

                    if(i != n - 1)
                    {
                        cout << ",";
                    }
                }
                cout << "]\n";

                break;
            }

            case 7:
            {
                cout << "\nExiting Program...\n";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
        }

    } while(op != 7);

    return 0;
}