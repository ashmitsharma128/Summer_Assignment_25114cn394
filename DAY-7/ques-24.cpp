#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    int result = 1;

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    cout << "x^n = " << result << endl;

    return 0;
}