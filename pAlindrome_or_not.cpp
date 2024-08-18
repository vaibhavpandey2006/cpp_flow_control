#include <iostream>
#include "join_p.h"

using namespace std;

string  cal_palindrome (string x){
    int  n = x.length();
    string reversed;
    for (int i =n-1; i >=0; i--){
            reversed += x [i] ;

    }
    if( reversed  == x){
        cout <<" its a palindrome"<<endl;

    }
    else
        cout << "not a palindrome "<<endl;


}


void find_palindrome ()  {
    string a;
    cout << " Enter the number :"<< endl;
    cin>> a;
    cal_palindrome( "a");


}
