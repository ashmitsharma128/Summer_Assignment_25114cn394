#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n == 0) {
        cout << "Number of digits: 1\n";
        return 0;
    }

    if (n < 0) n = -n; // make positive

    int count = 0;
    while (n > 0) {
        n /= 10;
        ++count;
    }

    cout << "Number of digits: " << count << "\n";
    return 0;
}