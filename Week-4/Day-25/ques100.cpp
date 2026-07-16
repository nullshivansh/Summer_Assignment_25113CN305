#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of words : ";
    cin >> n;

    cin.ignore();
    string words[100];

    cout << "Enter words :\n";
    for(int i = 0; i < n; i++)
    {
        getline(cin, words[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(words[i].length() > words[j].length())
            {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "\nWords Sorted By Length:\n";

    for(int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}