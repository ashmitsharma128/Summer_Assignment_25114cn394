#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1], b[n2], c[n1 + n2];
    int k = 0;

    for(int i = 0; i < n1; i++) cin >> a[i];
    for(int i = 0; i < n2; i++) cin >> b[i];

    for(int i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }

    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < k; j++) {
            if(b[i] == c[j]) {
                found = true;
                break;
            }
        }
        if(found == false) {
            c[k] = b[i];
            k++;
        }
    }

    for(int i = 0; i < k; i++) cout << c[i] << " ";

    return 0;
}