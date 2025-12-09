#include "Shape.cpp"

int main() {
    double w, h;

    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    Triangle t(w, h);
    Rectangle r(w, h);

    cout << "\n--- Results ---" << endl;
    cout << "Area of Triangle = " << t.area() << endl;
    cout << "Area of Rectangle = " << r.area() << endl;

    return 0;
}
