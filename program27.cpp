#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    cout << "Enter time (hours minutes seconds): ";
    cin >> hours >> minutes >> seconds;
    int total = hours * 3600 + minutes * 60 + seconds;
    cout << "Total time in seconds = " << total << endl;
    return 0;
}
