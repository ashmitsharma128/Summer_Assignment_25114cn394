#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int arr[100];
    int sum = 0;
    
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    float average = sum / n;
    
    cout << "Sum: " << sum;
    cout << "\nAverage: " << average;
    
    return 0;
}