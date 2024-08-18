#include<iostream >
#include"join_p.h"
#include<cmath>

using namespace std;

int cal_fibonac (int n) {
    int sum ;
    int j =0;
    int k =1;
    for ( int i = 0; i < n ;i++){
        cout << j << " " ;
        sum = j+k;
        j=k;
        b =sum;
    }
    cout << endl;

}

void find_fibonacci ()
{
    int a;
    cout <<"Enter the  number : "<< endl;
    cin>>a;
    cal_fibonac (a);


}
