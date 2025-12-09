#include <iostream>
using namespace std;

// Parent Class
class RBI
{
private:
    double rate;

protected:
    RBI()
    {
        this->rate = 9.5;
    }

    void BankRate(double amount, string bankname)
    {
        double final_amount = (amount * rate) / 100;
        cout << endl
             << bankname << " :\t " << final_amount << endl
             << endl;
    }
};

// Child Classes
class SBI : public RBI
{
private:
    double amount;

public:
    void setAmountSBI()
    {
        cout << "Enter SBI total amount : ";
        cin >> this->amount;
    }
    void getRate()
    {
        BankRate(this->amount, "SBI");
    }
};

class BOB : public RBI
{
private:
    double amount;

public:
    void setAmountBOB()
    {
        cout << "Enter BOB total amount : ";
        cin >> this->amount;
    }
    void getRate()
    {
        BankRate(this->amount, "BOB");
    }
};

class ICICI : public RBI
{
private:
    double amount;

public:
    void setAmountICICI()
    {
        cout << "Enter ICICI total amount : ";
        cin >> this->amount;
    }
    void getRate()
    {
        BankRate(this->amount, "ICICI");
    }
};