#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int totalProducts = 0;
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "     INVENTORY MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter Product ID : ";
                cin >> p[totalProducts].id;

                cin.ignore();

                cout << "Enter Product Name : ";
                getline(cin, p[totalProducts].name);

                cout << "Enter Quantity : ";
                cin >> p[totalProducts].quantity;

                cout << "Enter Price : ";
                cin >> p[totalProducts].price;

                totalProducts++;

                cout << "\nProduct Added Successfully!\n";

                break;
            }

            case 2:
            {
                if(totalProducts == 0)
                {
                    cout << "\nNo Products Found!\n";
                }
                else
                {
                    cout << "\n========== PRODUCTS ==========\n";

                    for(int i = 0; i < totalProducts; i++)
                    {
                        cout << "\nProduct " << i + 1 << endl;

                        cout << "ID       : " << p[i].id << endl;
                        cout << "Name     : " << p[i].name << endl;
                        cout << "Quantity : " << p[i].quantity << endl;
                        cout << "Price    : Rs. " << p[i].price << endl;
                    }
                }

                break;
            }

            case 3:
            {
                int searchID;
                bool found = false;

                cout << "\nEnter Product ID : ";
                cin >> searchID;

                for(int i = 0; i < totalProducts; i++)
                {
                    if(p[i].id == searchID)
                    {
                        cout << "\nProduct Found!\n";

                        cout << "ID       : " << p[i].id << endl;
                        cout << "Name     : " << p[i].name << endl;
                        cout << "Quantity : " << p[i].quantity << endl;
                        cout << "Price    : Rs. " << p[i].price << endl;

                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    cout << "\nProduct Not Found!\n";
                }

                break;
            }

            case 4:
            {
                cout << "\nThank You!\n";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
        }

    } while(choice != 4);

    return 0;
}