#include<iostream>

using namespace std;

int main() {
    // Declare array a of 10 integers
    int a[10];
    // Declare a variable to store the sum of all elements in array
    int sum = 0;
    // Use for loop to enter the values of elements in array
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // Use for loop to find the sum of all elements in array
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    // Print the sum of all elements in array
    cout << sum;
    return 0;
}
das
