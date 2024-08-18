#include <iostream>
#include "join_p.h"

using namespace std;

int cal_lcm (int x , int y){

    int maxVal = max(x, y);  // Start with the maximum of x and y.

    for (int lcm = maxVal; ; lcm += maxVal) {  // Increment by maxVal each time.
        if (lcm % x == 0 && lcm % y == 0) {  // Check if lcm is divisible by both x and y.
            return lcm;  // Return the LCM when found.
        }
    }

}

void find_lcm () {
    int a,b;
    cout << " Enter the no " << endl;
    cin >> a>>b;
    int result = cal_lcm( a,b );
    cout << "The lcm of "<< a << " and "<< b<< " are "<< result <<endl;



}
