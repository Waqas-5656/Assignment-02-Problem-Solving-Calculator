#include <iostream>
using namespace std;

int main() {
    double distance, kmPerLitre, pricePerLitre, fuelUsed, totalCost;

    cout << "Enter distance travelled (km): ";
    cin >> distance;
    cout << "Enter average (km per litre): ";
    cin >> kmPerLitre;
    cout << "Enter petrol price per litre: Rs. ";
    cin >> pricePerLitre;

    fuelUsed = distance / kmPerLitre;
    totalCost = fuelUsed * pricePerLitre;

    cout << "Petrol consumed = " << fuelUsed << " litres" << endl;
    cout << "Total petrol cost = Rs. " << totalCost << endl;
    return 0;
}
