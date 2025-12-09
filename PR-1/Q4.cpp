#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    grade = (score >= 90) 
        ? 'A'
        : (score >= 80) 
        ? 'B'
        : (score >= 70)   
        ? 'C'
        : (score >= 60)  
        ? 'D'
        : (score >= 50) 
        ? 'E'
        : 'F';
        
    cout << "grade is: " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "You passed." << endl;
        break;
    case 'D':
        cout << "You need to improve." << endl;
        break;
    case 'F':
        cout << "Failed. Better luck next time." << endl;
        break;
    default:
        cout << "Invalid grade." << endl;
    }

    if (score >= 60)
    {
        cout << "You are eligible for the next level." << endl;
    }
    else
    {
        cout << "You need to re-try in the exam." << endl;
    }
}