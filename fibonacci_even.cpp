#include<iostream>
#include "join_p.h"
#include <cmath>

using namespace std;

int fibonac ( int x) {
    //int n =x;
    int value =0;
    int sum = 0;
    int j =0;
    int k =1;

    for (int i = 0 ; i< x; i++ ){
            cout << j<< " ";
            if (  i %2 ==0  ){
                sum = sum + j;
            }

            value = j+k;
            j=k;
            k=value;


    }
    cout << endl;
    cout << "sum of fibonacci numbers of even value "<<sum<<endl;
}





void call_fibonaciii () {
    int a;
    cout << " Enter the number "<< endl;
    cin>> a;
    fibonac (a);



}
