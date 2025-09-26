#include "Student_Managment_System.cpp"
#include <string.h>
using namespace std;

int main()
{
    StudentManager<int> sm;
    int choice;

    do
    {
        cout << "===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sm.addStudent();
            break;
        case 2:
            sm.displayAll();
            break;
        case 3:
            sm.searchStudent();
            break;
        case 4:
            sm.removeStudent();
            break;
        case 5:
            cout << "Exiting program..." << endl
                 << endl;
            break;
        default:
            cout << "Invalid choice" << endl
                 << endl;
        }
    } while (choice != 5);

    return 0;
}
