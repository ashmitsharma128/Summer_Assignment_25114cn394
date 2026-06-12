#include <iostream>
using namespace std;

void printFibonacci(int count) {
    int a = 0, b = 1;
    for (int i = 0; i < count; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int count;
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> count;
    cout << "Fibonacci sequence: ";
    printFibonacci(count);
    return 0;
}