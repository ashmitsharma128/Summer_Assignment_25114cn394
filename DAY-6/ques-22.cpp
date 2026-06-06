#include <iostream>
using namespace std;

int main() {
    long long binary;
    cout << "Enter binary number: ";
    cin >> binary;

    long long decimal = 0;
    long long base = 1;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}