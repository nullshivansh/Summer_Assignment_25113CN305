#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    string word = "";
    string longestWord = "";

    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word += str[i];
        }
        else
        {
            if(word.length() > longestWord.length())
            {
                longestWord = word;
            }
            word = "";
        }
    }

    cout << "Longest Word = " << longestWord;

    return 0;
}