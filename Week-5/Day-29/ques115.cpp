#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "=================================================\n";
    cout << "       WELCOME TO STRING OPERATIONS SYSTEM\n";
    cout << "=================================================\n";

    cout << "Enter a String : ";
    getline(cin, str);

    do
    {
        cout << "\n=================================================\n";
        cout << "              STRING OPERATIONS MENU\n";
        cout << "=================================================\n";

        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Count Vowels and Consonants\n";
        cout << "4. Convert Lowercase to Uppercase\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Remove Spaces\n";
        cout << "7. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int length = 0;
                for(int i = 0; str[i] != '\0'; i++)
                {
                    length++;
                }
                cout << "\nLength = " << length << endl;
                break;
            }

            case 2:
            {
                cout << "\nReversed String : ";
                for(int i = str.length()-1; i >= 0; i--)
                {
                    cout << str[i];
                }
                cout << endl;
                break;
            }

            case 3:
            {
                int vowels = 0;
                int consonants = 0;
                for(int i = 0; str[i] != '\0'; i++)
                {
                    char ch = str[i];

                    if((ch >= 'A' && ch <= 'Z') ||
                       (ch >= 'a' && ch <= 'z'))
                    {
                        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                        {
                            vowels++;
                        }
                        else
                        {
                            consonants++;
                        }
                    }
                }

                cout << "\nVowels = " << vowels << endl;
                cout << "Consonants = " << consonants << endl;

                break;
            }

            case 4:
            {
                string upper = str;
                for(int i = 0; upper[i] != '\0'; i++)
                {
                    if(upper[i] >= 'a' && upper[i] <= 'z')
                    {
                        upper[i] = upper[i] - 32;
                    }
                }

                cout << "\nUppercase String : " << upper << endl;
                break;
            }

            case 5:
            {
                string reverse = "";
                for(int i = str.length()-1; i >= 0; i--)
                {
                    reverse += str[i];
                }
                if(reverse == str)
                {
                    cout << "\nPalindrome String\n";
                }
                else
                {
                    cout << "\nNot a Palindrome String\n";
                }

                break;
            }

            case 6:
            {
                string result = "";
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] != ' ')
                    {
                        result += str[i];
                    }
                }
                cout << "\nString Without Spaces : " << result << endl;

                break;
            }

            case 7:
            {
                cout << "\nThank You!\n";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
        }

    } while(choice != 7);

    return 0;
}