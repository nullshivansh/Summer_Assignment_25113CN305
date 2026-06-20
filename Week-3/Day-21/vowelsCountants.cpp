#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
    }

    cout << "\nThe Entered String : " << str << endl;
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits;

    return 0;
}