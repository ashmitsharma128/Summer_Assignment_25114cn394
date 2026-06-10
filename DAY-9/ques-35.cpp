#include <iostream>
using namespace std;

int main() {
    char chars[] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << chars[i];
        }
        cout << endl;
    }
    return 0;
}
