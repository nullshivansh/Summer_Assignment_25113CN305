#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    string author;
    bool issued;

public:
    void addBook()
    {
        cout << "\nEnter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    int getID()
    {
        return bookID;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book Issued Successfully.\n";
        }
        else
        {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book Returned Successfully.\n";
        }
        else
        {
            cout << "Book was not issued.\n";
        }
    }

    void displayBook()
    {
        cout << "\n-------------------------";
        cout << "\nBook ID   : " << bookID;
        cout << "\nBook Name : " << bookName;
        cout << "\nAuthor    : " << author;
        cout << "\nStatus    : " << (issued ? "Issued" : "Available");
        cout << "\n-------------------------\n";
    }
};

int main()
{
    Book books[100];
    int totalBooks = 0;
    int choice, id;

    while (true)
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            books[totalBooks].addBook();
            totalBooks++;
            break;

        case 2:
            if (totalBooks == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                for (int i = 0; i < totalBooks; i++)
                {
                    books[i].displayBook();
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < totalBooks; i++)
            {
                if (books[i].getID() == id)
                {
                    books[i].displayBook();
                    break;
                }
            }
            break;

        case 4:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < totalBooks; i++)
            {
                if (books[i].getID() == id)
                {
                    books[i].issueBook();
                    break;
                }
            }
            break;

        case 5:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < totalBooks; i++)
            {
                if (books[i].getID() == id)
                {
                    books[i].returnBook();
                    break;
                }
            }
            break;

        case 6:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}