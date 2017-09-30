// CANDY3
#include <iostream>
using namespace std;

int main() {
    int notc;
    cin >> notc ;
    while( notc-- ) {
        long long num,cand,temp,i;
        cin >> num ;
        i=0;
        temp=0;
        while( i<num ) {
            cin >> cand ;
            cand%=num;
            temp+=cand;
            temp%=num;
            i++;
        }
        if( temp==0 )
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    return 0;
}
