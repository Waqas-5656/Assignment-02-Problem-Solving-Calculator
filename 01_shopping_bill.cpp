#include <iostream>
using namespace std;

int main() {
    double notebookPrice, penPrice, total;
    int notebookQuantity, penQuantity;

    cout << "Enter price of one notebook: ";
    cin >> notebookPrice;
    cout << "Enter number of notebooks: ";
    cin >> notebookQuantity;
    cout << "Enter price of one pen: ";
    cin >> penPrice;
    cout << "Enter number of pens: ";
    cin >> penQuantity;

    total = notebookPrice * notebookQuantity + penPrice * penQuantity;
    cout << "Total shopping bill = Rs. " << total << endl;
    return 0;
}
