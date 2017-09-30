// LQDCANDY
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    int notc;
    cin >> notc ;
    while( notc-- ) {
        long long int N,copy;
        vector < pair<int,int> > bin;
        scanf("%lld",&N);
        copy = N;
        int i=1;
        while( copy>0 ) {
            bin.push_back( make_pair( copy%2 , i++ ) );
            copy/=2;
        }
        vector < pair<int,int> >::reverse_iterator rit;
        int b1,b2;
        for( rit=bin.rbegin() ; rit<bin.rend() ; rit++ )
            if( rit->first==1 ) {
                b1 = rit->second ;
                break;
            }
        vector < pair<int,int> >::iterator it;
        for( it=bin.begin() ; it<bin.end() ; it++ )
            if( it->first==1 ) {
                b2 = it->second ;
                break;
            }
        it=bin.end();
        long long po=1;
        for( long long i=0 ; po<N ; i++ )
            po*=2;
        if( b1==b2 ) {
            cout << po << " " << 0 << endl ;
        }
        else {
            cout << po << " " << b1-b2+1 << endl ;
        }
    }
    return 0;
}
