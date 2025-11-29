#include <iostream>
using namespace std;

int main() {
    int pf, ic, cg;
    cout << "Enter marks in Programming Fundamentals: ";
    cin >> pf;
    cout << "Enter marks in Introduction to Computing: ";
    cin >> ic;
    cout << "Enter marks in Computer Graphics: ";
    cin >> cg;

    int total = pf + ic + cg;
    double average = total / 3.0;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    return 0;
}
