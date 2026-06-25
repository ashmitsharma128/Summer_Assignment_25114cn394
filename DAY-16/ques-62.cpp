#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxCount = 0;
    int element = a[0];

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }

    cout << element;
    return 0;
}