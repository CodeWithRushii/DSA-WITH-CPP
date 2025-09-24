#include <iostream>
using namespace std;

class P {
protected:
    float temp;  
public:
    void setCelsius(float temp) {
        this->temp = temp;
    }
};

class Q : public P {
protected:
    float fahrenheit;
public:
    void toFahrenheit() {
        fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit \t: " << fahrenheit << " °F" << endl;
    }
    float getFahrenheit() {
        return fahrenheit;
    }
};

class R : public Q {
private:
    float kelvin;
public:
    void toKelvin() {
        // Fahrenheit to Kelvin
        kelvin = (getFahrenheit() - 32.0) * 5.0 / 9.0 + 273.15;
        cout << "Temperature in Kelvin \t: " << kelvin << " K" << endl;
    }
};