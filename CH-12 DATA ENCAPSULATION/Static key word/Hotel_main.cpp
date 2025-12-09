#include <iostream>
#include "Hotel.cpp"
using namespace std;

int main() {

    // Input static data once
    Hotel::displayStaticData();

    int n;
    cout << "Enter number of Hotels: ";
    cin >> n;

    Hotel hotels[n];

    cout << endl;

    // Input data for each hotel
    for (int i = 0; i < n; i++) {
        cout << "Entering details for Hotel " << (i + 1) << ":" << endl;
        hotels[i].setData();
    }

    cout << endl;
    // Display data for each hotel
    for (int i = 0; i < n; i++) {
        cout << "Details of Hotel " << (i + 1) << ":" << endl;
        hotels[i].getData();
    }
    return 0;

    
};
