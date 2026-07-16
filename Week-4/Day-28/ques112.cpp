#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    int seatNumber;
    string passengerName;
    string destination;
    bool booked;

public:
    Ticket()
    {
        booked = false;
    }

    int getSeatNumber()
    {
        return seatNumber;
    }

    bool isBooked()
    {
        return booked;
    }

    void bookTicket(int seat)
    {
        seatNumber = seat;
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Destination: ";
        getline(cin, destination);

        booked = true;

        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket()
    {
        if (booked)
        {
            booked = false;
            cout << "Ticket Cancelled Successfully.\n";
        }
        else
        {
            cout << "Ticket is not booked.\n";
        }
    }

    void displayTicket()
    {
        if (booked)
        {
            cout << "\n----------------------------";
            cout << "\nPassenger Name : " << passengerName;
            cout << "\nSeat Number    : " << seatNumber;
            cout << "\nDestination    : " << destination;
            cout << "\nStatus         : Booked";
            cout << "\n----------------------------\n";
        }
        else
        {
            cout << "No booking found.\n";
        }
    }
};

int main()
{
    Ticket seats[50];

    int choice;
    int seatNo;

    while (true)
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Check Seat Availability";
        cout << "\n4. Display Ticket";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "Enter Seat Number (1-50): ";
            cin >> seatNo;

            if (seatNo < 1 || seatNo > 50)
            {
                cout << "Invalid Seat Number!\n";
                break;
            }

            if (seats[seatNo - 1].isBooked())
            {
                cout << "Seat Already Booked!\n";
            }
            else
            {
                seats[seatNo - 1].bookTicket(seatNo);
            }

            break;

        case 2:

            cout << "Enter Seat Number: ";
            cin >> seatNo;

            if (seatNo >= 1 && seatNo <= 50)
            {
                seats[seatNo - 1].cancelTicket();
            }
            else
            {
                cout << "Invalid Seat Number!\n";
            }

            break;

        case 3:

            cout << "Enter Seat Number: ";
            cin >> seatNo;

            if (seatNo >= 1 && seatNo <= 50)
            {
                if (seats[seatNo - 1].isBooked())
                    cout << "Seat is Booked.\n";
                else
                    cout << "Seat is Available.\n";
            }
            else
            {
                cout << "Invalid Seat Number!\n";
            }

            break;

        case 4:

            cout << "Enter Seat Number: ";
            cin >> seatNo;

            if (seatNo >= 1 && seatNo <= 50)
            {
                seats[seatNo - 1].displayTicket();
            }
            else
            {
                cout << "Invalid Seat Number!\n";
            }

            break;

        case 5:

            cout << "Thank You!\n";
            return 0;

        default:

            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}