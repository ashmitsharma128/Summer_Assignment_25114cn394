#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> sum;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum) {
                cout << a[i] << " " << a[j] << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << -1;
    }

    return 0;
}