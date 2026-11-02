#include <iostream>
using namespace std;

int main() {
    double units, pricePerUnit, bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    bill = units * pricePerUnit;
    cout << "Total electricity charges = Rs. " << bill << endl;
    return 0;
}
