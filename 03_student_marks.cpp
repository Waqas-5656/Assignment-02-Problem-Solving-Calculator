#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3, m4, m5, total, average, percentage;

    cout << "Enter marks in five subjects (each out of 100): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    cout << "Total marks = " << total << " / 500" << endl;
    cout << "Average marks = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
