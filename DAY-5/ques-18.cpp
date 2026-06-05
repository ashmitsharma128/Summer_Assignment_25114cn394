#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, temp, digit, sum = 0;
    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}