
#include <iostream>
#include "join_p.h"

using namespace std;

int do_reverse (string n){
    for ( int i= 6; i>0; i--){
        cout<<n[i];
    }

}


void reverse_number (){
    string a ;

    cout << " Enter the no "<< endl;
    cin>> a;
    do_reverse(a);




}
