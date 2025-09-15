#include <iostream>
using namespace std;

class banksystem
{
    int accountNumber;
    char accountHolderName[50];

protected:
    long balance;
    double amount;

public:
    // setter
    void bankAccount()
    {
        cout << "Enter Account Number :- ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name :- ";
        cin.getline(accountHolderName, 30);
        cout << "Enter Your Bank Balance :- ";
        cin >> balance;
    }

    long Balance()
    {
        return balance;
    }

    void deposit()
    {
        cout << "Enter Deposite Amount :- ";
        cin >> this->amount;
        this->balance += amount;
    }

    void setwithdraw()
    {
        cout << "Enter Withdraw Amount :- ";
        cin >> this->amount;
    }

    void getwithdraw()
    {
        if (amount > balance)
        {
            cout << endl
                 << endl
                 << "insufficient balance";
        }
        else
        {
            this->balance -= amount;
        }
    }

    void getBalance()
    {
        cout << "Balance :- " << this->balance;
    }

    void getAccountInfo()
    {
        cout << "Account Number :- " << accountNumber << endl;
        cout << "Account Holder Name :- " << accountHolderName << endl;
        cout << "Balance :- " << balance << endl;
    }
};

class SavingsAccount : public banksystem
{
    float interestRate;

public:
    void calculateInterest()
    {
        interestRate = 7.5 / 100;
        float interest = balance * interestRate;
        cout << endl
             << "Interest :- " << interest << endl;
        balance += interest;
        cout << "Balance after Interest :- " << balance << endl
             << endl;
    }
};

class CheckingAccount : public banksystem
{
    int overdraftLimit;

public:
    void checkOverdraft()
    {
        overdraftLimit = balance;
        setwithdraw();
        if (amount > overdraftLimit)
        {
            cout << "You limit of Monthly is over ";
        }
        else
        {
            getwithdraw();
        }
    }
};

class FixedDepositAccount : public banksystem
{
    int term;

public:
    float Interest;

    void calculateInterest()
    {
        term = 12;
        Balance();
        Interest = balance * 0.07 * (12 / term);
        cout << endl
             << endl
             << " Deposit Interest :- " << Interest;
    }
};