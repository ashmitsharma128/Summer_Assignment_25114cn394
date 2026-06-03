#include <iostream>
using namespace std;

int main() {
    int num1, num2, max, lcm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;
    lcm = max;

    while (lcm % num1 != 0 || lcm % num2 != 0) {
        lcm += max;
    }

    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}