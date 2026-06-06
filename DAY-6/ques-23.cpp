#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    while (num > 0) {
        count += num & 1;
        num = num >> 1;
    }

    cout << "Set bits: " << count << endl;

    return 0;
}