#include <iostream>
#include "join_p.h"

using namespace std;


bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int divisor = 3;
    while (divisor * divisor <= num) {
        if (num % divisor == 0) return false;
        divisor += 2;
    }
    return true;
}


int  prime_between (int k , int l ){

    if (k > l) {
        int temp = k;
        k = l;
        l = temp;
    }
    int go_calculate = k;
    while( go_calculate  <= l ){

        if ( is_prime (go_calculate)){
            cout <<  go_calculate << " ";
    }
    go_calculate++;

    }
    cout << endl;
}



void caal_prime (){

    int a ,b;
    cout << " Enter the number :"<< endl;
    cin>>a;
    cin>>b;
    prime_between (a,b);

}
