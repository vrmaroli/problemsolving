// HPYNOS
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector <int> nums;

int main() {
    int num,count;
    count=0;
    int dig,sos;
    cin >> num ;
    while(1) {
        vector<int>::iterator it;
        for( it=nums.begin() ; it<nums.end() ; it++ ) {
            if(*it==num) {
                cout << -1 << endl ;
                return 0;
            }
        }
        nums.push_back(num);
        sos=0;
        while(num>0) {
            dig=num%10;
            num/=10;
            sos+=dig*dig;
        }
        count++;
        if(sos==1)
            break;
        else
            num=sos;
    }
    cout << count << endl ;
    return 0;
}
