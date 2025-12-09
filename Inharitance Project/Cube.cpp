#include <iostream>
using namespace std;

class Number
{
protected:
    int n;

public:
    void setNumber(int n)
    {
        this->n = n;
    }
};

class Square : public Number
{
public:
    void getSquare()
    {
        cout << "Square of " << n << " = " << n * n << endl;
    }
};

class Cube : public Number
{
public:
    void getCube()
    {
        cout << "Cube of " << n << " = " << n * n * n << endl;
    }
};