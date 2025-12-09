#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int train_no;
    string train_name;
    string source;
    string destination;
    string train_time;

public:
    // Setter method
    void setData(int no, string name, string src, string dest, string time) {
        train_no = no;
        train_name = name;
        source = src;
        destination = dest;
        train_time = time;
    }

    // Display train details
    void display() {
        cout << "\nTrain Number   : " << train_no;
        cout << "\nTrain Name     : " << train_name;
        cout << "\nSource         : " << source;
        cout << "\nDestination    : " << destination;
        cout << "\nTrain Time     : " << train_time << endl;
    }

    // Getter for Train Number
    int getTrainNo() {
        return train_no;
    }
};

