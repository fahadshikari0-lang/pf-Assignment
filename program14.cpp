#include <iostream>
using namespace std;

int main() {
    float mm, inch;
    cout << "Enter length in millimeters: ";
    cin >> mm;
    inch = mm / 25.4;
    cout << mm << " mm = " << inch << " inches" << endl;
    return 0;
}
