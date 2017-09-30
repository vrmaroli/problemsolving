// NGM
#include <iostream>
#include <stdio.h>
#define ll long long
using namespace std;

int main() {
    ll num;
    scanf("%lld",&num);
    if( num%10==0 ) cout << 2 << endl ;
    else cout << 1 << endl << num%10 << endl ;
    return 0;
}
