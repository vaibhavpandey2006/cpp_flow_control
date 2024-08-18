#include <iostream>

using namespace std;

int calculate_gcd(int x, int y) {
    int n;
    int store[100];  // Assuming a maximum size of 100 for the array to store common factors
    int index = 0;   // To keep track of the number of common factors found

    if (x > y) {
        n = x;
    } else {
        n = y;
    }

    // Find and store common factors
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && y % i == 0) {
            store[index] = i;  // Store the common factor in the array
            index++;           // Increment the index
        }
    }

    // Print the array of common factors
    cout << "Common factors: ";
    for (int i = 0; i < index; i++) {
        cout << store[i] << " "; // Print each common factor followed by a space
    }
    cout << endl;

    // The last element in the array `store` is the GCD
    return store[index - 1];
}

void find_gcd() {
    int a, b;
    cout << "Enter the values: ";
    cin >> a >> b;
    int result = calculate_gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
}


