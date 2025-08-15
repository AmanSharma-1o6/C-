
#include <iostream>
#include <string>
using namespace std;

int main() {
    string b;
    cout << "Enter binary number: ";
    cin >> b;

    // Validate input
    for (char c : b) {
        if (c != '0' && c != '1') {
            cout << "Invalid input: Not a binary number" << endl;
            return 0;
        }
    }

    // Convert to decimal
    long long decimal = 0;
    for (char c : b) {
        decimal = decimal * 2 + (c - '0');
    }
    cout << "Decimal number is: " << decimal << endl;
    return 0;
}
