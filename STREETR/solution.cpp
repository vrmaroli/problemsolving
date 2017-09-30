// STREETR
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int gcd(int a, int b) {
    if( a==0 )
        return b;
    while( b!=0 ) {
        if( a > b )
            a = a-b ;
        else
            b = b-a ;
    }
    return a ;
}

int main() {
    int ntree,temp,min;
    int i;
    cin >> ntree ;
    vector <int> pos;
    vector <int> dif;
    while( ntree-- ) {
        cin >> temp ;
        pos.push_back( temp );
    }
    i=1;
    sort( pos.begin() , pos.end() );
    while( i < (int)pos.size()-1 ) {
        dif.push_back( pos[i]-pos[i-1] );
        i++;
    }
    i=2;
    min = gcd( dif[0] , dif[1] );
    while( i < (int)dif.size()-1 ) {
        min = gcd( min , dif[i] );
        i++;
    }
    cout << ( ( pos[(int)pos.size()-1] - pos[0] ) / min ) + 1 - (int)pos.size() << endl ;
    return 0;
}
