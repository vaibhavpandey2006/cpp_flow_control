

#include <iostream>
#include "join_p.h"
#include<cmath>

using namespace std;


int calculator (char  n, int a , int b) {

    if (n  == '+' ){
        cout << a+b <<endl;
    }
    else if ( n == '-'){
        cout << a-b<<endl;
    }
    else if ( n == '*'){
        cout << a*b << endl;
    }
    else if ( n == '/'){
        cout << float (a/b) <<endl;
    }
    else if ( n == '%'){
        cout << a%b<< endl;
    }


}



void find_calculator (){

    char  q;
    int a ,b;
    cout << " Enter the number "<< endl;
    cin>> a>>b>>q;
    calculator ( q,a,b);



}
