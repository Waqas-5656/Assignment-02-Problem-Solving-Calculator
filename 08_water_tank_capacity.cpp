#include <iostream>
using namespace std;

int main() {
    double length, width, height, volume, capacityLitres;

    cout << "Enter tank length (m): ";
    cin >> length;
    cout << "Enter tank width (m): ";
    cin >> width;
    cout << "Enter tank height (m): ";
    cin >> height;

    volume = length * width * height;
    capacityLitres = volume * 1000;

    cout << "Tank volume = " << volume << " cubic metres" << endl;
    cout << "Tank capacity = " << capacityLitres << " litres" << endl;
    return 0;
}
