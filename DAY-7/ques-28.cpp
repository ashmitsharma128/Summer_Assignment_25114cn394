#include <iostream>
using namespace std;

int reverseNumber(int n, int reversed = 0) {
    if (n == 0) {
        return reversed;
    }
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Reversed number: -" << reverseNumber(-num) << endl;
    } else {
        cout << "Reversed number: " << reverseNumber(num) << endl;
    }
    
    return 0;
}