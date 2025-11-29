#include <iostream>
using namespace std;

int main() {
    float f, c;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    c = (5.0 / 9.0) * (f - 32);
    cout << "Temperature in Celsius = " << c << "°C" << endl;
    return 0;
}
