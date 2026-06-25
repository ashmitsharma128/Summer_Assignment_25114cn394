#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++) {
        sum += a[i];
    }

    cout << total - sum;
    return 0;
}