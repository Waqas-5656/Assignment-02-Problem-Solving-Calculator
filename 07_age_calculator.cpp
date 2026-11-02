#include <iostream>
using namespace std;

int main() {
    int ageYears, ageMonths, ageWeeks, ageDays;

    cout << "Enter age in years: ";
    cin >> ageYears;

    ageMonths = ageYears * 12;
    ageWeeks = ageYears * 52;
    ageDays = ageYears * 365;

    cout << "Approximate age in months = " << ageMonths << endl;
    cout << "Approximate age in weeks = " << ageWeeks << endl;
    cout << "Approximate age in days = " << ageDays << endl;
    return 0;
}
