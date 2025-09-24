#include <iostream>
using namespace std;

class Result {
    int sub;

public:
    Result() {
        sub = 0;
    }

    void sciData() {
        cout << "Enter marks of Science: ";
        cin >> sub;
    }

    // Unary ++
    Result operator++() {
        Result r1;
        r1.sub = this->sub + 1;
        return r1;
    }

    // Unary --
    Result operator--() {
        Result r1;
        r1.sub = this->sub - 1;
        return r1;
    }

    // Binary +
    Result operator+(Result r2) {
        Result r;
        r.sub = this->sub + r2.sub;
        return r;
    }

    int getMarks() {
        return sub;
    }
};

int main() {
    Result sci, math, eng, guj, ss, com;

    // Input only science marks
    sci.sciData();

    // Other subjects derived using unary operators
    math = --sci;    // math = sci - 1
    eng  = ++sci;    // eng = sci + 1
    guj  = ++sci;    // guj = sci + 1
    ss   = --sci;    // ss = sci - 1
    com  = ++sci;    // com = sci + 1

    // Display marksheet
    cout << "\n--- Marksheet ---" << endl;
    cout << "Science : " << sci.getMarks() << endl;
    cout << "Math    : " << math.getMarks() << endl;
    cout << "English : " << eng.getMarks() << endl;
    cout << "Gujarati: " << guj.getMarks() << endl;
    cout << "SS      : " << ss.getMarks() << endl;
    cout << "Computer: " << com.getMarks() << endl;

    // Total using + operator
    Result totalObj = sci + math + eng + guj + ss + com;
    int total = totalObj.getMarks();
    double per = (double)total / 6.0;

    cout << "Total   : " << total << endl;
    cout << "Percent : " << per << endl;

    // Grade
    if (per >= 90)
        cout << "Grade   : A+" << endl;
    else if (per >= 80)
        cout << "Grade   : A" << endl;
    else if (per >= 70)
        cout << "Grade   : B" << endl;
    else if (per >= 60)
        cout << "Grade   : C" << endl;
    else if (per >= 50)
        cout << "Grade   : D" << endl;
    else
        cout << "Grade   : F" << endl;

    return 0;
}
