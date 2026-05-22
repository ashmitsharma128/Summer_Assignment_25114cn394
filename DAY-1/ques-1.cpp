#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i; // add i to sum
    }

    cout << "Sum of first " << N << " natural numbers is " << sum << "\n";
    return 0;
}