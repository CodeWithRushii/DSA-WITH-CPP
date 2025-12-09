#include <iostream>
using namespace std;

class Shape {
protected:
    float width, height;
public:
    Shape(float w, float h) {
        width = w;
        height = h;
    }

    virtual float area() {
        return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(float w, float h) : Shape(w, h) {}

    float area() {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : Shape(w, h) {}

    float area() {
        return width * height;
    }
};