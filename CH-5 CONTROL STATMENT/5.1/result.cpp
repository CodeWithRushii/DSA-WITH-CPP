// result
#include <iostream>
using namespace std;

main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << endl;
    if (marks >= 91 && marks <= 100)
    {
        cout << "GRADE : A1" << endl;
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << "GRADE : A2" << endl;
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << "GRADE : B1" << endl;
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << "GRADE : B2" << endl;
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << "GRADE : C1" << endl;
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << "GRADE : C2" << endl;
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << "GRADE : D" << endl;
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << "YOUR ARE FAIL ....!" << endl
             << "BETTER LUCK NEXT TIME ....!" << endl;
    }
    else
    {
        cout << "YOU HAVE ENTER WRONG MARKS " << endl
             << "PLEASE ENTER CORRECT MARKS " << endl;
    }
}