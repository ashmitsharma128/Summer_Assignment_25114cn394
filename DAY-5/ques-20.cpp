#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;

    long long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }

    for (long long i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    cout << largest;

    return 0;
}