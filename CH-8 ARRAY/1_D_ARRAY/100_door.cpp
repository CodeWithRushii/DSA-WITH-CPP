#include <iostream>
using namespace std;

int main()
{
    int totalDoors = 10;
    int doors[11] = {0};
    // Toggle logic
    for (int i = 1; i <= totalDoors; i++)
    {
        for (int j = i; j <= totalDoors; j += i)
        {
            if (doors[j] == 0)
                doors[j] = 1; // closed → open
            else
                doors[j] = 0; // open → closed
        }
    }

    // Print final state
    for (int i = 1; i <= totalDoors; i++)
    {
        cout << "Door " << i << ": " << (doors[i] == 1 ? "Open" : "Closed") << endl;
    }

    return 0;
}
