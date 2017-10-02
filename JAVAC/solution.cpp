#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <limits>

#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)

using namespace std;

int main() {
    string in;
    while(cin>>in) {
        bool java,cpp;
        java=cpp=false;
        for(int i=0;i<int(in.length());i++) {
            if(isupper(in[i]))
                java=true;
            if(in[i]=='_')
                cpp=true;
        }
        for(int i=0;i+1<int(in.length());i++) {
            if(in[i]=='_' and in[i+1]=='_')
                cpp=java=true;
        }
        if(in[0]=='_' or in[int(in.length())-1]=='_' or isupper(in[0]))
            cpp=java=true;
        if(cpp and java)
            cout << "Error!" << endl ;
        else if(cpp) {
            bool cap=false;
            for(int i=0;i<int(in.length());i++) {
                if(in[i]!='_') {
                    if(cap) {
                        cout << char(toupper(in[i])) ;
                        cap=false;
                    }
                    else
                        cout << in[i] ;
                }
                else
                    cap=true;
            }
            cout << endl ;
        }
        else {
            for(int i=0;i<int(in.length());i++) {
                if(islower(in[i]))
                    cout << in[i] ;
                else
                    cout << "_" << (char)tolower(in[i]) ;
            }
            cout << endl ;
        }
    }
    return 0;
}
