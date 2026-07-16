#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    cout << "Enter first string : ";
    getline(cin, str1);

    cout << "Enter second string : ";
    getline(cin, str2);

    cout << "Common Characters : ";
    for(int i = 0; str1[i] != '\0'; i++)
    {
        bool found = false;
        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                found = true;
                break;
            }
        }

        if(found)
        {
            cout << str1[i] << " ";
        }
    }

    return 0;
}