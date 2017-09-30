// ROOTCIPH
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int notc;
    long long a,b,c;
    cin >> notc ;
    while( notc-- ) {
        scanf("%lld%lld%lld",&a,&b,&c) ;
        cout << (a*a)-(2*b) << endl ;
    }
    return 0;
}
