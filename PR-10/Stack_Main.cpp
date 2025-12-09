#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    int size, value;
    cout << "Enter Size Of Stack: ";
    cin >> size;
    Stack stack(size);
    int choice;
    do
    {
        cout << endl;
        cout << "1. Push Element In Stack" << endl;
        cout << "2. Pop Element From Stack" << endl;
        cout << "3. Display Stack" << endl;
        cout << "4. Is Stack Empty" << endl;
        cout << "5. Is Stack Full" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter Element To Push:- ";
            cin >> value;
            stack.Push(value);
            cout << endl;
            break;
        case 2:
            stack.Pop();
            break;
        case 3:
            stack.Display();
            break;
        case 4:
            stack.IsEmpty();
            break;
        case 5:
            stack.IsFull();
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice. Please Try Again." << endl;
        }
    } while (choice != 6);

    return 0;
}
