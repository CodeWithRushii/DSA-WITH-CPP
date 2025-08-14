#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    cout << endl
         << "array input" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "]:- ";
        cin >> a[i];
    }

    int n;
    int pos, element;

    do
    {
        cout << system("clear");

        cout << "PRESS 1 FOR INSERT" << endl;
        cout << "PRESS 2 FOR PUSH" << endl;
        cout << "PRESS 3 FOR FETCH" << endl;
        cout << "PRESS 4 FOR UPDATE" << endl;
        cout << "PRESS 5 FOR DELETE" << endl;
        cout << "PRESS 6 FOR POP" << endl;
        cout << "PRESS 0 FOR EXIT" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            cout << system("clear");

            cout << "INSERT" << endl
                 << endl;

            int pos, element;
            cout << "Enter the position to insert: ";
            cin >> pos;
            cout << "Enter the element to insert: ";
            cin >> element;

            if (pos >= 0 && pos < size)
            {
                for (int i = size - 1; i >= pos; i--)
                {
                    a[i + 1] = a[i];
                }
                a[pos] = element;
                size++;
            }

            break;
        case 2:
            cout << system("clear");

            cout << "PUSH" << endl;

            cout << "Enter the element to push: ";
            cin >> element;
            a[size] = element;
            size++;
            cout << "Element pushed successfully!" << endl;
            break;
        case 3:
            cout << system("clear");

            cout << "FETCH" << endl
                 << endl;

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << system("clear");

            cout << "UPDATE" << endl;

            cout << "Enter the position to update: ";
            cin >> pos;
            if (pos >= 0 && pos < size)
            {
                cout << "Enter the new element: ";
                cin >> element;
                a[pos] = element;
                cout << "Element updated successfully!" << endl;
            }
            break;
        case 5:
            cout << system("clear");

            cout << "DELETE" << endl;

            cout << "Enter the position to delete: ";
            cin >> pos;
            if (pos >= 0 && pos < size)
            {
                for (int i = pos; i < size - 1; i++)
                {
                    a[i] = a[i + 1];
                }
                size--;
                cout << "Element deleted successfully!" << endl;
            }
            break;
        case 6:
            cout << system("clear");

            cout << "POP" << endl;
            if (size > 0)
            {
                size--;
                cout << "Element popped successfully!" << endl;
            }
            break;

        default:
            cout << "invalid choice";
            break;
        }
    } while (n != 0);
}