#include <iostream>
using namespace std;

int main() {
    double a, b, c, disc;
    cout << "Enter values of a, b, and c: ";
    cin >> a >> b >> c;
    disc = (b * b) - (4 * a * c);
    cout << "Discriminant = " << disc << endl;
    return 0;
}
