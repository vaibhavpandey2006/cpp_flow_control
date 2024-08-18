#include <iostream>
#include"join_p.h"
#include <cmath>

using namespace std;

int find_factor (int n) {
    int store = n;
    int store2;
    for (int i =1; i <= store ; i++){
        if (store %i == 0){
            cout << " factors of "<< store << " are " << i <<endl;
        }

    }

}


void call_factors(){
    int a;
    cout << " Enter the  number to get its factor "<<endl;
    cin>>a;
    find_factor(a);

}
