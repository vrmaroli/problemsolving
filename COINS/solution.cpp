// COINS
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

map < int , long long> memo ;

long long dp( long long num ) {
    if( num==0 )
        return 0;
    long long a,b,c,d;
    d=memo[num];
    if( d==0 ) {
        a=dp( num/2 );
        b=dp( num/3 );
        c=dp( num/4 );
        if( a+b+c > num ) {
            memo[num]=a+b+c;
            d=a+b+c;
        }
        else {
            memo[num]=num;
            d=num;
        }
    }
    return d;
}

int main() {
    long long in;
    while(1) {
        if( scanf("%lld",&in)==EOF )
            return 0;
        cout << dp(in) << endl ;
    }
    return 0;
}
