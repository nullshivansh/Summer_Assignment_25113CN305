#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Compressed String : ";
    int count = 1;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
        else
        {
            cout << str[i] << count;
            count = 1;
        }
    }

    return 0;
}