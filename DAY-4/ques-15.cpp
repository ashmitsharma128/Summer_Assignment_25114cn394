#include <iostream>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0, temp, power, digit;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == original) {
        cout << original << " is an Armstrong number";
    } else {
        cout << original << " is not an Armstrong number";
    }
    return 0;
}