#include <iostream>
#include "join_p.h"

using namespace std;

int primemult ( int n )

{
    int z;
    for (int i=1; i<=10; i++){
       cout << n<< "*"<< i<< "="<< n*i<< endl;

    }
}
    void multiplication () {
        int a ;
        cout << " enter the number "<< endl;
        cin>>a;
        primemult(a );
}
