#include <iostream>
using namespace std;

struct Inventory
{
    char desc[128];
    int ID;
    int amount;
    float wholeCost;
    float retailCost;
};

void displayInventory(Inventory products);

void setInventory(Inventory products);


int main()
{
    Inventory products;
    int selection1 = 1;
    int selection2 = 1;
    while (selection1 == 1)
    {
        setInventory(products);
        cout << "Would you like to set another inventory value? (Enter 1 for yes, 0 for no) ";
        cin >> selection1;
    }
    while (selection2 == 1)
    {
        displayInventory(products);
        cout << "Would you like to display another inventory value? (Enter 1 for yes, 0 for no) ";
        cin >> selection1;
    }

}

void displayInventory(Inventory products)
{
    int selection;
    cout << "Make a selection: " << endl
        << "1. Display Description " << endl
        << "2. Display Product ID " << endl
        << "3. Display Quantity " << endl
        << "4. Display Wholesale Cost " << endl
        << "5. Display Retail Cost " << endl;
    cin >> selection;
    switch (selection)
    {
    case 1:
    {
        cout << products.desc[128-1];
        break;
    }

    case 2:
    {
        cout << products.ID;
        break;
    }

    case 3:
    {
        cout << products.amount;
        break;
    }
    case 4:
    {
        cout << products.wholeCost;
        break;
    }
    case 5:
    {
        cout << products.retailCost;
        break;
    }
    }
}
void setInventory(Inventory products)
{
    int selection;
    cout << "Make a selection: " << endl
        << "1. Enter Description " << endl
        << "2. Enter Product ID " << endl
        << "3. Enter Quantity " << endl
        << "4. Enter Wholesale Cost " << endl
        << "5. Enter Retail Cost " << endl;
    cin >> selection;
    switch (selection)
    {

        case 1:
        {
            cin >> products.desc[128-1];
            break;
        }
        case 2:
        {
            cin >> products.ID;
            break;
        }
        case 3:
        {
            cin >> products.amount;
            break;
        }
        case 4:
        {
            cin >> products.wholeCost;
            break;
        }
        case 5:
        {
            cin >> products.retailCost;
            break;
        }
}
}
