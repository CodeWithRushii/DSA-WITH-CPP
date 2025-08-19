#include <iostream>
using namespace std;

// UDF

//addition
int add(int a, int b)
{
    return a + b;
}

//subtraction
int subtract(int a, int b)
{
    return a - b;
}

//multiplication
int multiply(int a, int b)
{
    return a * b;
}

//division
int divide(int a, int b)
{
    return b != 0 ? a / b : 0;
}

//modulus
int mod(int a, int b)
{
    return b != 0 ? a % b : 0;
}

int main()
{
    int choice, a, b;

    do
    {
        cout << endl
             << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << endl
             << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 0)
        {
            cout << "Exiting the program..." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> a;
        cout << endl;

        cout << "Enter the second number: ";
        cin >> b;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Addition of " << a << " + " << b << " = " << add(a, b) << endl;
            break;
        case 2:
            cout << "Subtraction of " << a << " - " << b << " = " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Multiplication of " << a << " * " << b << " = " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Division of " << a << " / " << b << " = " << divide(a, b) << endl;
            break;
        case 5:
            cout << "Modulus of " << a << " % " << b << " = " << mod(a, b) << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
