#include <iostream>
#include "Train.cpp"
using namespace std;

int main() {
    int n = 3; // Minimum 3 trains
    Train t[3];

    cout << "=== Enter Train Details ===" << endl;
    for (int i = 0; i < n; i++) {
        int no;
        string name, src, dest, time;

        cout << "\nEnter details of Train " << i + 1 << ":"<<endl;
        cout << "Train Number : ";
        cin >> no;
        cin.ignore(); // clear buffer
        cout << "Train Name   : ";
        getline(cin, name);
        cout << "Source       : ";
        getline(cin, src);
        cout << "Destination  : ";
        getline(cin, dest);
        cout << "Train Time   : ";
        getline(cin, time);

        t[i].setData(no, name, src, dest, time);
    }

    int choice;
    do {
        cout << "\n=== Railway Reservation Menu ==="<<endl;
        cout << "1. Display All Records"<<endl;
        cout << "2. Search Train by Number"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- All Train Records ---"<<endl;
                for (int i = 0; i < n; i++) {
                    t[i].display();
                }
                break;
            }

            case 2: {
                int searchNo;
                cout << "\nEnter Train Number to Search : ";
                cin >> searchNo;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (t[i].getTrainNo() == searchNo) {
                        cout << "\n--- Train Found ---"<<endl;
                        t[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nTrain not found!" << endl;
                }
                break;
            }

            case 3:
                cout << "\nExiting... Thank you!"<<endl;
                break;

            default:
                cout << "\nInvalid Choice! Please try again."<<endl;
        }

    } while (choice != 3);

    return 0;
}
