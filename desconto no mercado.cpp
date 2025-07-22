#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello, what are you buying today?" << endl;
    cout << "apples:$60" << endl
         << "banana:$50" << endl
         << "brocoli:$90" << endl
         << "cookies:$100" << endl
         << "frenchfries:$300" << endl;
    cout << "Please enter the item you want and how many to buy: ";

    string item;¢
    int quantity;
    cin >> item >> quantity;

    int price = 0;
    if (item == "apples") price = 60;
    else if (item == "banana") price = 50;
    else if (item == "brocoli") price = 90;
    else if (item == "cookies") price = 100;
    else if (item == "frenchfries") price = 300;
    else {
        cout << "Item not found." << endl;
        return 1;
    }

    int total = price * quantity;
    double finalTotal = total;

    if (total <= 100) {
        finalTotal = total * 0.9;
        cout << "You got 10% discount!" << endl;
    } else if (total <= 300) {
        finalTotal = total * 0.85;
        cout << "You got 15% discount!" << endl;
    } else {
        finalTotal = total * 0.8;
        cout << "You got 20% discount!" << endl;
    }

    cout << "The total value is: " << finalTotal << endl;
    return 0;
}