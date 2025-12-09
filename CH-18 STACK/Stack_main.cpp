#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);
    int choice;
    int element;
    do
    {
        cout << endl
             << " Menu:" << endl;

        cout << "press 1 for Push opration" << endl;
        cout << "press 2 for Pop opration" << endl;
        cout << "press 3 for Peek opration" << endl;
        cout << "press 4 for Display opration" << endl;
        cout << "press 5 for isEmpty opration" << endl;
        cout << "press 6 for isFull opration" << endl;
        cout << "press 7 for length opration" << endl;
        cout << "press 0 for Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to push: ";
            cin >> element;
            stack.push(element);
            break;

        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            stack.isEmpty();
            break;
        case 6:
            stack.isFull();
            break;
        case 7:
            stack.length();
            break;
        case 0:
            cout << "Exiting program." << endl
                 << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);
}