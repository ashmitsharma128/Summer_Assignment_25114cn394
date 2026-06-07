#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number to find sum of digits: ";
    cin >> num;
    
    if (num < 0) {
        num = -num;
    }
    
    cout << "Sum of digits of " << num << " is " << sumOfDigits(num) << endl;
    
    return 0;
}