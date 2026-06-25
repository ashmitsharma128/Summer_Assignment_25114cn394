#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    d = d % n;

    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = a[n - d + i];
    }

    for(int i = n - 1; i >= d; i--) {
        a[i] = a[i - d];
    }

    for(int i = 0; i < d; i++) {
        a[i] = temp[i];
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}