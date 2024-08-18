
#include<iostream>
#include"join_p.h"
#include<cmath>

using namespace std;

bool isArmstrong ( int k){
    int originalNum ,remainder , n =0 ,result =0;

    originalNum = k;

    // to check no of digits
    while ( originalNum != 0 ){
        originalNum = originalNum /10;
        ++n;
    }

    originalNum = k;
    // calculate partcular no to the power of n

    while (originalNum != 0){
        remainder = originalNum  % 10 ;
        result = result + pow(remainder  , n);
        originalNum = originalNum /10;
    }
    return ( result == k);



}



int group_armstrong ( int n, int m )  {

    int tool ;
    if ( n > m) {
        tool =n;
        n =m;
        m = tool;
    }

    for ( int i =n ; i <= m; i++){
        if ( isArmstrong( i)){
            cout << i << " is a armstrong  "<<endl;
        }
    }

}


void cal_armstrong () {
    int a, b;
    cout <<" Enter the range " << endl;
    cin>> a>>b;
    group_armstrong (a,b);


}

