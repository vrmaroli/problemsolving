#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int notc;
    cin >> notc;
    long long num, count;
    while(notc--) {
        cin >> num;
        count = 1 ;
        for(long long i=2; i < sqrt(num); i++) {
            if(num%(i*i)==0) {
                count++;
                //cout << "\t" << i << endl ;
            }
        }
        cout << count << endl ;
    }
    return 0;
}
