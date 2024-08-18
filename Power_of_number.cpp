


#include <iostream>
#include "join_p.h"
#include<cmath>

using namespace std;

int calculate_power (int x , int y){
    int m =x;
    int n =y;
    cout << "power is "<< pow(x,y);
}

void find_power () {
     int a ,b;
     cout << " Enter the number :"<<endl;
     cin>> a;
      cout << " Enter the power of the number :"<<endl;
      cin>>b;
     calculate_power( a,b);

}
