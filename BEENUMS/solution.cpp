// BEENUMS
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector <bool> hexa(1000000000,0);

int main() {
    long long bee=0,h=0;
    while(1) {
        bee=3*h*h+3*h+1;
        if(bee>1000000000)
            break;
        hexa[bee-1]=1;
        h++;
    }
    while(1) {
        cin >> bee ;
        if(bee==-1)
            return 0;
        if( hexa[bee-1] )
            cout << "Y" << endl ;
        else
            cout << "N" << endl ;
    }
    return 0;
}
