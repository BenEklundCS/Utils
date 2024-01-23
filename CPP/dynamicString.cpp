#include <iostream>
#include <string>
using namespace std;

void printMenu();
void printList(string*, int);
string* expand(string*, int&);
bool insertAtZero(string*, string, int);
bool insertAt(string*, string, int, int);
bool insertAtEnd(string*, string, int);
bool removeFromEnd(string*, int);
bool removeFrom(string*, int, int);
void sort(string*, int);

int main()
{
    int length = 5, dex;
    int* ptrL = &length;
    int ct = length;
    int* ptrC = &ct;
    int userInput, x = 0;
    string item, * p;
    string* primary = new string[length];
    for (int i = 0; i < length; i++)
    {
        cout << "input item for array: ";
        cin >> item;
        cin.ignore(100, '\n');
        *(primary + i) = item;
        cin.clear();
    }

    /* TESTS FOR FUNCTIONS

    primary = expand(primary, length);
    string input;
    cout << "Insert another string: ";
    cin >> input;
    bool val = insertAtZero(primary, input, ct);
    ct++;
    cout << endl;
    printList(primary, length);
    val = insertAtEnd(primary, input, ct);
    ct++;
    cout << endl;
    printList(primary, length);
    int dex = 3;
    val = insertAt(primary, input, dex, ct);
    ct++;
    cout << endl;
    printList(primary, length);
    cout << endl;
    removeFromEnd(primary, ct);
    ct--;
    printList(primary, length);
    cout << endl;
    removeFrom(primary, dex, ct);
    ct--;
    printList(primary, length);
    cout << endl;
    sort(primary, ct);

    */

    do
    {
        printMenu();
        cin >> userInput;
        // Input Validation
        while ((cin.fail() == 1) || (userInput < 1 || userInput > 8))
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Invalid input!" << endl;
            cout << "Enter an integer value 1-8:" << endl;
            cin >> userInput;
        }
        switch (userInput)
        {
        case 1:
          cout << "Enter string to be added: ";
          cin >> item;
          insertAtEnd(primary, item, ct);
          ct++;
          break;
        case 2:
          cout << "Enter string to be added: ";
          cin >> item;
          insertAtZero(primary, item, ct);
          ct++;
          break;
        case 3:
          cout << "Enter string to be added: ";
          cin >> item;
          cout << "Enter index to be added at:";
          cin >> dex;
          insertAt(primary, item, dex, ct);
          ct++;
          break;
        case 4:
          removeFromEnd(primary, ct);
          ct--;
        case 5:
          cout << "Enter index to be removed:";
          cin >> dex;
          removeFrom(primary, dex, ct);
          ct--;
        case 6:
          sort(primary, ct);
        case 7:
          printList(primary, sizeof(primary));
        case 8:
            exit(1);
        }
        cout << "Would you like to continue? 0 = No, 1 = Yes";
        cin >> x;
        while ((cin.fail() == 1) || (userInput != 1 && userInput != 0))
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Invalid input!" << endl;
            cout << "Enter an integer value 0-1:" << endl;
            cin >> userInput;
        }

    } while (x == 1);
}

void printMenu()
{
    cout <<
        "Please choose from the following menu choices:" << endl <<
        "1) Insert a new element to the end of the list." << endl <<
        "2) Insert a new element at the beginning of the list." << endl <<
        "3) Insert an element into the list at a given index." << endl <<
        "4) Remove an element from the end of the list." << endl <<
        "5) Remove an element from the list at a given index." << endl <<
        "6) Sort the list." << endl <<
        "7) Print the contents of the list." << endl <<
        "8) Exit." << endl;
}

void printList(string* p, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) != "")
            cout << *(p + i) << endl;
    }
}

string* expand(string* p, int& size)
{
    size *= 2;
    string* result = new string[size];
    for (int i = 0; i < (size / 2); i++)
    {
        *(result + i) = *(p + i);
    }
    delete[] p;
    p = nullptr;
    return result;
}

bool insertAtZero(string* p, string item, int count)
{
    bool result = true;
    for (int i = count; i > 0; i--)
    {
        *(p + i) = *(p + i - 1);
    }
    *(p) = item;
    return result;
}

bool insertAtEnd(string* p, string item, int count)
{
    bool result = true;
    *(p + count) = item;
    return result;
}

bool insertAt(string* p, string item, int index, int count)
{
    bool result = true;
    if (index >= count)
    {
        return false;
    }
    else
    {
        for (int i = count; i >= index; i--)
        {
            *(p + i) = *(p + i - 1);
        }
        *(p + index) = item;
    }
    return result;
}

bool removeFromEnd(string* p, int count)
{
    bool result;
    *(p + count - 1) = "";
    return result;
}

bool removeFrom(string* p, int index, int count)
{
    bool result;
    for (int i = index; i < count; i++)
    {
        *(p + i) = *(p + i + 1);
    }
    return result;
}

void sort(string* p, int count)
{
    string temp;
    bool swap = false;

    do
    {
        swap = false;
        for (int i = 0; i < count - 1; i++)
        {
            if (*(p + i) > *(p + i + 1))
            {
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;
                swap = true;
            }
        }


        /* TEST FOR SORT FUNCTION

        for(int x = 0; x < count; x++)
        {
            cout << *(p + x) << " ";
        }
        cout << endl;

        */

    } while (swap);
}