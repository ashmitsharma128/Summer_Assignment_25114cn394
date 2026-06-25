#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > 1) {
            bool already = false;
            for(int k = 0; k < i; k++) {
                if(a[k] == a[i]) {
                    already = true;
                    break;
                }
            }
            if(!already) {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}