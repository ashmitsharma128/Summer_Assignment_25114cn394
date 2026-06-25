#include <iostream>
using namespace std;

int main() {
    int n, key, pos = -1;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> key;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << pos;
    else
        cout << -1;

    return 0;
}