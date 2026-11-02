#include <iostream>
using namespace std;

int main() {
    double purchasePrice, sellingPrice, quantity;
    double totalPurchaseCost, totalSalesRevenue, profitOrLoss;

    cout << "Enter purchase price per product: Rs. ";
    cin >> purchasePrice;
    cout << "Enter selling price per product: Rs. ";
    cin >> sellingPrice;
    cout << "Enter quantity sold: ";
    cin >> quantity;

    totalPurchaseCost = purchasePrice * quantity;
    totalSalesRevenue = sellingPrice * quantity;
    profitOrLoss = totalSalesRevenue - totalPurchaseCost;

    cout << "Total purchase cost = Rs. " << totalPurchaseCost << endl;
    cout << "Total sales revenue = Rs. " << totalSalesRevenue << endl;
    cout << "Profit (positive) / Loss (negative) = Rs. " << profitOrLoss << endl;
    return 0;
}
