
#include <iostream>
#include "join_p.h"
#include<cmath>

using namespace std;

int find_neon (int x, int y){



    for ( int i = x; i <= y; i++ ) {
        int n =i*i;
        int sum = 0;
        int temp = n;



    while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " is a Neon number." << endl;
        }

    }
}



void call_neon () {
    int a,b;
    cout << "Enter the number to check neon "<<endl;
    cin>> a>>b;
    find_neon(a, b);




}
