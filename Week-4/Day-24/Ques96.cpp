#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << "String After Removing Duplicates : ";
    for(int i = 0; str[i] != '\0'; i++)
    {
        bool duplicate = false;
        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout << str[i];
        }
    }

    return 0;
}