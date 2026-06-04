#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter n: ";
    cin >> n;
    if (n == 0) {
        cout << "Fibonacci term: " << a;
        return 0;
    }
    if (n == 1) {
        cout << "Fibonacci term: " << b;
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    cout << "Fibonacci term: " << b;
    return 0;
}