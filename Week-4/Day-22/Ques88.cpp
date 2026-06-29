#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a sentence : ";
    getline(cin, str);

    cout << "\nString Without Spaces : ";
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            cout << str[i];
        }
    }

    return 0;
}