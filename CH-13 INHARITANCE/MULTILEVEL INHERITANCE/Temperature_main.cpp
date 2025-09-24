#include "Temperature.cpp"

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    R obj;
    obj.setCelsius(celsius);
    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}
