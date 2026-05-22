#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a non-negative integer: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return 0;
    }

    unsigned long long fact = 1;
    for (int i = 1; i <= N; ++i) {
        fact *= i;
    }

    cout << N << "! = " << fact << "\n";
    return 0;
}