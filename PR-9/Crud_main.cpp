#include <iostream>
#include "Crud.cpp"
using namespace std;

int main()
{
    LinkedList l1;

    int choice;
    int value;
    int pos;

    do
    {

        cout << "press 1 for insert at beginning" << endl;
        cout << "press 2 for search data" << endl;
        cout << "press 3 for delete data at position" << endl;
        cout << "press 4 for reverse" << endl;
        cout << "press 5 for display all data" << endl;
        cout << "press 0 for exit" << endl;
        cout << "Enter your choice:- ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter data:- ";
            cin >> value;
            l1.insertatbeginning(value);
            break;
        case 2:
            cout << "Enter position for data:- ";
            cin >> pos;
            l1.search(pos);
            break;
        case 3:
            cout << "Enter position to delete data:- ";
            cin >> pos;
            l1.deleteatposition(pos);
            break;
        case 4:
            l1.reverse();
            break;
        case 5:
            l1.display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}