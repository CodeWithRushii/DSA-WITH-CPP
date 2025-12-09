#include <iostream>
using namespace std;

class Operation
{
public:
    virtual void calculate() = 0;
};

class symbole : public Operation
{
public:
    void calculate(int a, int b)
    {
        if (b != 0)
            cout << "Division: " << (a / b) << endl;
        else
            cout << "Error! Division by zero." << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << "Subtraction: " << (a - b - c) << endl;
    }

    void calculate(int a, int b, int c, int d)
    {
        cout << "Multiplication: " << (a * b * c * d) << endl;
    }

    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "Addition: " << (a + b + c + d + e) << endl;
    }

    void calculate() {}
};