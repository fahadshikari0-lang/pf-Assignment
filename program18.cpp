#include <iostream>
using namespace std;

int main() {
    double vi = 10.0, t = 5.0, a = 2.0, s;
    s = vi * t + 0.5 * a * t * t;
    cout << "Initial Velocity = " << vi << endl;
    cout << "Time = " << t << endl;
    cout << "Acceleration = " << a << endl;
    cout << "Displacement (s) = " << s << endl;
    return 0;
}
