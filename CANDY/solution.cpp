// CANDY
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int nopk,avg;
    while(1) {
        cin >> nopk ;
        if( nopk==-1 )
            break;
        vector <int> cand;
        int i=0;
        int sum=0;
        while( i<nopk ) {
            cin >> avg ;
            cand.push_back( avg );
            sum+=avg;
            i++;
        }
        if( sum%nopk!=0 ) {
            cout << -1 << endl ;
        }
        else {
            avg=sum/nopk;
            sum=0;
            vector <int>::iterator it;
            it=cand.begin();
            while( it<cand.end() ) {
                if( avg>*it )
                    sum+=avg-*it;
                else
                    sum+=*it-avg;
                it++;
            }
            cout << sum/2 << endl ;
        }
    }
    return 0;
}
