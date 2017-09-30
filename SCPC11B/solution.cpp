// SCPC11B
#include <iostream>
#include <map>
using namespace std;

int main() {
    while(1) {
        int nost;
        cin >> nost ;
        if( nost==0 )
            return 0;
        map <int,bool> hiway;
        for(int i=0; i<nost ; i++) {
            int temp;
            cin>>temp;
            hiway[temp]=1;
        }
        bool flag=1;
        int gas=0;
        int mark=0;
        while( mark<1422 ){
            if( hiway[mark]==1 ) {
                gas=200;
            }
            if( gas==0 ) {
                flag=0;
                break;
            }
            gas--;
            mark++;
        }
        while( mark>0 ){
            if( hiway[mark]==1 ) {
                gas=200;
            }
            if( gas==0 ) {
                flag=0;
                break;
            }
            gas--;
            mark--;
        }
        if( flag )
            cout << "POSSIBLE" << endl ;
        else
            cout << "IMPOSSIBLE" << endl ;
    }
    return 0;
}
