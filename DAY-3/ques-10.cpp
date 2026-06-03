#include <iostream>
using namespace std;

int main() {
    int start, end, i, j, isPrime;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    for (i = start; i <= end; i++) {
        if (i == 0 || i == 1)
            continue;

        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}