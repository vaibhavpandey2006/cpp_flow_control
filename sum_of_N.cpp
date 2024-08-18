
#include <iostream>
#include "join_p.h"

using namespace std;

int function1 ( int n )

{   int sum =0;
    for ( int i =1; i<= n ; i++){
       sum = sum + i;
       cout << sum << endl;
    }
}

    void sum_ofNatural (){
        int a;
        cout << " enter the no till to add"<<endl;

        cin>> a;
        function1(a);
}
