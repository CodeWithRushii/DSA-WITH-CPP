#include <iostream>
using namespace std;

// Base Class A
class A
{
protected:
    int a;

public:
    A( int x)
    {
        a = x;
    }
};

// Base Class B
class B
{
protected:
    int b;

public:
    B(int y)
    {
        b = y;
    }
};

// Derived Class C (inherits from A and B) - Multiple Inheritance
class C : public A, public B
{
protected:
    int c;

public:
    C(int x, int y, int z) : A(x), B(y)
    {
        c = z;
    }
};

// Derived Class D (inherits from C) - Hybrid Inheritance
class D : public C
{
    int d;

public:
    D(int x, int y, int z, int w) : C(x, y, z)
    {
        d = w;
    }

    void displaySum()
    {
        int sum = a + b + c + d;
        cout << "Sum of four numbers: " << sum << endl;
    }
};