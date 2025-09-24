#include <iostream>
using namespace std;

class x
{
protected:
    int a, b, c;
};

class y : public x
{
public:
    void setsumdata()
    {
        cout << endl;

        cout << "Enter value of A : ";
        cin >> a;
        cout << "Enter value of B : ";
        cin >> b;
        cout << "Enter value of C : ";
        cin >> c;
    }
    void getsumdata()
    {
        cout << endl;
        cout << "Cube of A : " << (a * a * a) << endl;
        cout << "Cube of B : " << (b * b * b) << endl;
        cout << "Cube of C : " << (c * c * c) << endl
             << endl;
        cout << "Sum of cube A , B and C is: " << (a * a * a) + (b * b * b) + (c * c * c) << endl
             << endl;
    }
};