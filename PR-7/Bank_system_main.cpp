#include "Bank_system.cpp"
using namespace std;

int main()
{
    int choice;
    do
    {

        SavingsAccount sa;
        CheckingAccount ca;
        FixedDepositAccount fa;

        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Get Balance" << endl;
        cout << "5. Get Account Info" << endl;
        cout << "6. Set Interest Rate" << endl;
        cout << "7. Check Overdraft" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sa.bankAccount();
            cout << "Account Created Successfully" << endl;
            break;
        case 2:
            sa.deposit();
            cout << endl;
            break;
        case 3:
            sa.setwithdraw();
            sa.getwithdraw();
            cout << endl;
            break;
        case 4:
            sa.getBalance();
            cout << endl;
            break;
        case 5:
            sa.getAccountInfo();
            cout << endl;
            break;
        case 6:
            sa.calculateInterest();
            cout << endl;
            break;
        case 7:
            ca.checkOverdraft();
            cout << endl;
            break;
        case 8:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0 && choice != 8);
}