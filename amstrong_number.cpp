#include <iostream>
#include"join_p.h"
#include <cmath>

using namespace std;

void find_armstrong(int n) {
    int original = n;
    int sum = 0;
    int num_digits = 0;

    int temp = n;
    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }


    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }
}

void calculate_armstrong() {
    int a;
    cout << "Enter the number: " << endl;
    cin >> a;
    find_armstrong(a);
}

