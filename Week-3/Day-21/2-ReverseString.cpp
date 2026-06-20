#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "\nEntered String : "<< str << endl;
    cout << " The Reversed String : ";
    for(int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}