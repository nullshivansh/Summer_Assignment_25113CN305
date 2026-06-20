#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);;

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << " " << endl;
    cout << "The Entered String is :"  ;
    cout << str;
    cout << " " <<  endl;
    
    cout << "The Length of string = " << count;
    return 0;
}