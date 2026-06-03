#include <iostream>
using namespace std;

int main() {
    int n, i, isPrime = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0 || n == 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}