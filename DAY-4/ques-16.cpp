#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp, power, digit;
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
    return sum == original;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;
    cout << "Armstrong numbers: ";
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    return 0;
}