// SCPC11D
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long a,b,c;
    while(1) {
        scanf("%lld %lld %lld",&a,&b,&c);
        if( a==0 and b==0 and c==0 )
            return 0;
        if( a>b and a>c ) {
            if( a*a==b*b+c*c )
                cout << "right" << endl ;
            else
                cout << "wrong" << endl ;
        }
        else if ( b>a and b>c ) {
            if( b*b==a*a+c*c )
                cout << "right" << endl ;
            else
                cout << "wrong" << endl ;
        }
        else if( c>a and c>b ) {
            if( c*c==a*a+b*b )
                cout << "right" << endl ;
            else
                cout << "wrong" << endl ;
        }
    }
    return 0;
}
