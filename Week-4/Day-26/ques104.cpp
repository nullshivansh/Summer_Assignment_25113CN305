#include <iostream>
#include <string>
using namespace std;

int main()
{
    string playerName;
    int answer;
    int score = 0;
    int topic;

    cout << "=====================================\n";
    cout << "       QUIZ MANAGEMENT SYSTEM\n";
    cout << "=====================================\n";

    cout << "Enter Player Name : ";
    getline(cin, playerName);

    cout << "\nWelcome, " << playerName << "!\n";
    cout << "TOPIC 1 : C++ PROGRAMMING\n";
    cout << "TOPIC 2 : COMPUTER SCIENCE\n";
    cout << "TOPIC 3 : GENERAL KNOWLEDGE\n";
    cout << "TOPIC 4 : APTITUDE & LOGICAL REASONING\n";
    cout << "Enter the Topic You Want To Take Quiz For : ";
    cin >> topic;

    switch (topic)
    {
    case 1:
        cout << "\n===== C++ PROGRAMMING QUIZ =====\n";

        cout << "\nQ1. What is the correct file extension for C++ files?\n";
        cout << "1. .cp\n";
        cout << "2. .cpp\n";
        cout << "3. .cxx\n";
        cout << "4. Both 2 and 3\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 4) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ2. Which keyword is used to create an object dynamically?\n";
        cout << "1. create\n";
        cout << "2. object\n";
        cout << "3. new\n";
        cout << "4. class\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ3. Which operator is used for scope resolution?\n";
        cout << "1. ::\n";
        cout << "2. ->\n";
        cout << "3. .\n";
        cout << "4. &&\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 1) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ4. Which function is the entry point of a C++ program?\n";
        cout << "1. start()\n";
        cout << "2. begin()\n";
        cout << "3. main()\n";
        cout << "4. run()\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ5. Which header file is used for input/output?\n";
        cout << "1. stdio.h\n";
        cout << "2. conio.h\n";
        cout << "3. iostream\n";
        cout << "4. math.h\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        break;

    case 2:
        cout << "\n===== COMPUTER SCIENCE QUIZ =====\n";

        cout << "\nQ1. What does CPU stand for?\n";
        cout << "1. Central Processing Unit\n";
        cout << "2. Computer Processing Unit\n";
        cout << "3. Central Program Unit\n";
        cout << "4. Control Processing Unit\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 1) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ2. Which data structure follows FIFO?\n";
        cout << "1. Stack\n";
        cout << "2. Queue\n";
        cout << "3. Tree\n";
        cout << "4. Graph\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 2) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ3. What does RAM stand for?\n";
        cout << "1. Random Access Memory\n";
        cout << "2. Read Access Memory\n";
        cout << "3. Rapid Access Memory\n";
        cout << "4. Random Allocate Memory\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 1) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ4. Which language is used for webpage structure?\n";
        cout << "1. CSS\n";
        cout << "2. JavaScript\n";
        cout << "3. HTML\n";
        cout << "4. Python\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ5. Binary number system uses how many digits?\n";
        cout << "1. 8\n";
        cout << "2. 10\n";
        cout << "3. 16\n";
        cout << "4. 2\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 4) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        break;

    case 3:
        cout << "\n===== GENERAL KNOWLEDGE QUIZ =====\n";

        cout << "\nQ1. Capital of India?\n";
        cout << "1. Mumbai\n";
        cout << "2. Kolkata\n";
        cout << "3. New Delhi\n";
        cout << "4. Chennai\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ2. National Animal of India?\n";
        cout << "1. Lion\n";
        cout << "2. Tiger\n";
        cout << "3. Elephant\n";
        cout << "4. Leopard\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 2) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ3. Father of the Nation?\n";
        cout << "1. Nehru\n";
        cout << "2. Ambedkar\n";
        cout << "3. Gandhi\n";
        cout << "4. Patel\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ4. Largest Planet?\n";
        cout << "1. Earth\n";
        cout << "2. Saturn\n";
        cout << "3. Mars\n";
        cout << "4. Jupiter\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 4) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ5. Number of States in India?\n";
        cout << "1. 28\n";
        cout << "2. 29\n";
        cout << "3. 30\n";
        cout << "4. 27\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 1) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        break;

    case 4:
        cout << "\n===== APTITUDE QUIZ =====\n";

        cout << "\nQ1. What is 15 x 12?\n";
        cout << "1. 160\n";
        cout << "2. 170\n";
        cout << "3. 180\n";
        cout << "4. 190\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ2. Train travels 60 km in 1 hour. Distance in 3 hours?\n";
        cout << "1. 120\n";
        cout << "2. 150\n";
        cout << "3. 180\n";
        cout << "4. 200\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 3) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ3. Next number: 2, 4, 8, 16, ?\n";
        cout << "1. 24\n";
        cout << "2. 32\n";
        cout << "3. 64\n";
        cout << "4. 128\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 2) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ4. If today is Monday, what day after 10 days?\n";
        cout << "1. Wednesday\n";
        cout << "2. Thursday\n";
        cout << "3. Friday\n";
        cout << "4. Saturday\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 2) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        cout << "\nQ5. What is 25% of 200?\n";
        cout << "1. 25\n";
        cout << "2. 50\n";
        cout << "3. 75\n";
        cout << "4. 100\n";
        cout << "Enter Answer : ";
        cin >> answer;
        if (answer == 2) { score++; cout << "Correct!\n"; } else { cout << "Wrong!\n"; }

        break;

    default:
        cout << "\nInvalid Topic Selected!\n";
        return 0;
    }

    // Result display (now applies to ALL topics)
    double percentage = (score * 100.0) / 5;

    cout << "\n=====================================\n";
    cout << "            QUIZ RESULT\n";
    cout << "=====================================\n";
    cout << "Player Name : " << playerName << endl;
    cout << "Score       : " << score << "/5" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Performance : ";

    if (percentage >= 80)
        cout << "Excellent";
    else if (percentage >= 60)
        cout << "Good";
    else if (percentage >= 40)
        cout << "Average";
    else
        cout << "Needs Improvement";

    cout << "\n=====================================\n";

    return 0;
}