// SILVER
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int mass=1;
    int i;
    while( 1 ) {
        cin >> mass ;
        if( mass==0 )
            return 0;
        else {
            for( i=0 ; mass>=pow(2,i) ; i++ );
            cout << i-1 << endl ;
        }
    }
    return 0;
}
