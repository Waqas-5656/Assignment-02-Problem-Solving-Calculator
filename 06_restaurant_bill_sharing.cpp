#include <iostream>
using namespace std;

int main() {
    double totalBill, eachShare;
    int numberOfFriends;

    cout << "Enter total restaurant bill: Rs. ";
    cin >> totalBill;
    cout << "Enter number of friends: ";
    cin >> numberOfFriends;

    eachShare = totalBill / numberOfFriends;
    cout << "Each friend must pay = Rs. " << eachShare << endl;
    return 0;
}
