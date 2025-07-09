#include <iostream>
using namespace std;

main()
{
    int languageChoice, rechargeChoice;

    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cout << "Enter your choice: ";
    cin >> languageChoice;

    switch (languageChoice)
    {
    case 1:
        cout << "Press 1 for Internet Recharge" << endl;
        cout << "Press 2 for Top-up Recharge" << endl;
        cout << "Press 3 for Special Recharge" << endl;
        cout << "Enter your choice: ";
        cin >> rechargeChoice;
        switch (rechargeChoice)
        {
        case 1:
            cout << "You have successfully done an Internet Recharge." << endl;
            break;
        case 2:
            cout << "You have successfully done a Top-up Recharge." << endl;
            break;
        case 3:
            cout << "You have successfully done a Special Recharge." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
        break;

    case 2:
        cout << "Internet Recharge ke liye 1 dabaiye" << endl;
        cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
        cout << "Special Recharge ke liye 3 dabaiye" << endl;
        cout << "Enter your choice: ";
        cin >> rechargeChoice;
        switch (rechargeChoice)
        {
        case 1:
            cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;
        case 2:
            cout << "Aapne safaltapurvak Top-up Recharge kar liya he." << endl;
            break;
        case 3:
            cout << "Aapne safaltapurvak Special Recharge kar liya he." << endl;
            break;
        default:
            cout << "Galat chunaav!" << endl;
        }
        break;

    case 3:
    system("cls");
        cout << "Internet Recharge mate 1 dabavo" << endl;
        cout << "Top-up Recharge mate 2 dabavo" << endl;
        cout << "Special Recharge mate 3 dabavo" << endl;
        cout << "Enter your choice: ";
        cin >> rechargeChoice;
        switch (rechargeChoice)
        {
        case 1:
            cout << "Tame safaltapurvak Internet Recharge karyu chhe." << endl;
            break;
        case 2:
            cout << "Tame safaltapurvak Top-up Recharge karyu chhe." << endl;
            break;
        case 3:
            cout << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
        break;
    default:
        cout << "Invalid language choice!" << endl;
    }
}