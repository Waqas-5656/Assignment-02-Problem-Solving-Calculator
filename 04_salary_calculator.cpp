#include <iostream>
using namespace std;

int main() {
    double basicSalary, houseRent, medicalAllowance, grossSalary;

    cout << "Enter basic monthly salary: Rs. ";
    cin >> basicSalary;
    cout << "Enter house rent allowance: Rs. ";
    cin >> houseRent;
    cout << "Enter medical allowance: Rs. ";
    cin >> medicalAllowance;

    grossSalary = basicSalary + houseRent + medicalAllowance;
    cout << "Gross salary = Rs. " << grossSalary << endl;
    return 0;
}
