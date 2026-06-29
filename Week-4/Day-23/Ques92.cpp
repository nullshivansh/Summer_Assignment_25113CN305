#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int maxFrequency = 0;
    char answer;

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > maxFrequency)
        {
            maxFrequency = count;
            answer = str[i];
        }
    }
    cout << "Maximum Occurring Character = " << answer << endl;
    cout << "Frequency = " << maxFrequency;

    return 0;
}