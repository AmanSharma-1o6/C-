#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Enter binary number: ";
    cin >> a;
    int x = 0, base = 1, rem;
    int temp = a;

    while (temp > 0) {
        rem = temp % 10;
        if (rem == 1 || rem == 0) {
            x += rem * base;
            base *= 2;
        } else {
            cout << "Invalid input: Not a binary number" << endl;
            return 0;
        }
        temp /= 10;
    }
    cout << "Decimal number is: " << x << endl;
    return 0;
}
