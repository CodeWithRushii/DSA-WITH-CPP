#include <iostream>
#include "Crud_Opperation.cpp"
#include <vector>
using namespace std;

int main() {
    crudOperation c1;
    int *choice = new int;
    int *element = new int;
    int *index = new int;

    do {
        cout << "Press 1 For Insert : " << endl;
        cout << "Press 2 For Display : " << endl;
        cout << "Press 3 For Update : " << endl;
        cout << "Press 4 For Delete : " << endl;
        cout << "Press 5 For Exit : " << endl;
        cout << "Enter Your Choice : ";
        cin >> *choice;

        switch (*choice) {
        case 1:
            cout << "Enter Any Element : ";
            cin >> *element;
            c1.addDataElement(*element);
            break;

        case 2:
            c1.displayDataElement();
            break;

        case 3:
            cout << "Enter Index To Update : ";
            cin >> *index;
            cout << "Enter New Element : ";
            cin >> *element;
            c1.updateDataElement(*index, *element);
            break;

        case 4:
            cout << "Enter Index To Delete : ";
            cin >> *index;
            c1.deleteDataElement(*index);
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice !!!" << endl;
        }
    } while (*choice != 5);

    delete choice;
    delete element;
    delete index;

    return 0;
}