
#include <iostream>
#include "join_p.h"

using namespace std;

int check_prime (int n){

    if ( n <= 1){
        cout << n<<" is not a prime no."<< endl;
        return false;
    }


    for ( int i =2; i >1 && i!= n; i++){
        if( n% i == 0 ){
            cout <<n<< " is not a prime no "<<endl;
            return false;
        }
    }

            cout << n<< " is a prime no "<< endl;
            //return true ;

}


void  input_number () {
    int a;
    cout << " Enter the no: "<< endl;
    cin>> a;
    check_prime(a);


}
