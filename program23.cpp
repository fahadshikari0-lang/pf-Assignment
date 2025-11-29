#include <iostream>
#define PI 3.1416
using namespace std;

int main() {
    double r, area, circumference;
    cout << "Enter radius of circle: ";
    cin >> r;
    area = PI * r * r;
    circumference = 2 * PI * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
    return 0;
}
