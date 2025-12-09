#include "Cube.cpp"

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Square s;
    Cube c;

    s.setNumber(n);
    c.setNumber(n);

    cout << "\n--- Results ---" << endl;
    s.getSquare();
    c.getCube();

    return 0;
}
