#include <iostream>
#include <cmath>
using namespace std;

void program1()
{
    int a = 10, b = 20, c = 30;
    cout << "a = " << a << ", b = " << b << ", c = " << c;
}

void program2()
{
    cout << "C++ language is a powerful programming language.";
}
void program3()
{

    int a = 10, b = 20, temp;
    cout << "Before swapping: a = " << a << ", b = " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b;
}

void menu()
{
    cout << "\n===== Multi-Program Menu =====\n";
    cout << "1. Assign three variables\n";
    cout << "2. Print message\n";
    cout << "3. interchange values of two variables\n";
}

int main()
{
    int choice;
    do
    {
        menu();
        cout << "\nEnter program number: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

        cout << "\n---------------------------------\n";

    } while (choice != 0);

    return 0;
}
