#include <iostream>
#include <vector>
using namespace std;

template <class T>
class StudentManager
{
private:
    vector<T> ids;
    vector<string> names;

    T id;
    string name;

    void inputStudent()
    {
        cout << "Enter Student ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Student Name: ";
        getline(cin, name);
    }

public:
    void addStudent()
    {
        cout << endl;
        inputStudent();    
        ids.push_back(id); 
        names.push_back(name);
        cout << endl
             << "Student Added Successfully!" << endl
             << endl;
    }

    void displayAll() const
    {
        if (ids.empty())
        {
            cout << "No students available!" << endl
                 << endl;
            return;
        }

        cout << "All Students:" << endl
             << endl;
        for (int i = 0; i < ids.size(); i++)
        {
            cout << "Student " << (i + 1) << ": "
                 << endl;
            cout << "ID: " << ids[i] << endl
                 << "Name: " << names[i] << endl
                 << endl;
        }
        cout << endl;
    }

    void searchStudent()
    {
        T search;
        cout << endl;
        cout << "Enter ID to Search: ";
        cin >> search;
        cout << endl;
        for (int i = 0; i < ids.size(); i++)
        {
            if (ids[i] == search)
            {
                cout << "Student Details:" << endl
                     << endl;
                cout << "ID: " << ids[i] << endl
                     << "Name: " << names[i] << endl;
                cout << endl;
                return;
            }
        }
        cout << "Student ID " << search << " not found!" << endl
             << endl;
    }

    void removeStudent()
    {
        T remove;
        cout << "Enter ID to Remove: ";
        cin >> remove;

        for (int i = 0; i < ids.size(); i++)
        {
            if (ids[i] == remove)
            {
                ids.erase(ids.begin() + i);
                names.erase(names.begin() + i);
                cout << "Student removed successfully!" << endl
                     << endl;
                return;
            }
        }
        cout << "Student ID " << remove << " not found!" << endl
             << endl;
    }
};
