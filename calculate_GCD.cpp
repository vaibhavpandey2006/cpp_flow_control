#include <iostream>
#include "join_p.h"

using namespace std;

int calculate_gcd (int x , int y ){
    int n;
    int index =0;
    int store [50];
    if ( x>y){
        n=x;
    }
    else{
        n=y;
    }
    for ( int i = 1;  i < n; i++){
        if ( x %i ==0  && y% i ==0 ){
            store[index] = i;

            index++;

    }
    }
    cout<<" common factor" << endl;
    for ( int i =0 ; i < index; i++){
        cout << store[i]<< " ";
    }
    cout << endl;



 return store[ index -1];
}

void find_gcd () {
    int a,b;
    cout <<"Enter the number " << endl;
    cin>>a>>b;
    int value = calculate_gcd(a,b);
    cout << " The ggcd of "<< a << " and " << b<< " are " << value;


}
