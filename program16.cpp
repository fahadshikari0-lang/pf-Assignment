#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = b = c = 3;  // multiple assignment
    int product = a * b * c;
    cout << "Product of " << a << ", " << b << ", and " << c << " = " << product << endl;
    return 0;
}
