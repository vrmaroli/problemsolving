/*
	Problem : 457 _Linear_Cellular_Automata
	URL : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=94&page=show_problem&problem=398
	Created by : Vishnu Ramesh Maroli
	Team : logN
	Date : 22:09:2012
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map <int,char> m;
    m[0]=' ';
    m[1]='.';
    m[2]='x';
    m[3]='W';
    int notc;
    cin >> notc ;
    while(notc--) {
        int in[10];
        int j;
        for(j=0;j<10;j++)
            cin >> in[j] ;
        int a[40]={0},b[40];
        a[19]=1;
        int days=49;
        for(j=0;j<40;j++)
            cout << m[a[j]] ;
        cout << endl ;
        while(days--) {
            b[0]=a[0]+a[1];
            b[39]=a[39]+a[38];
            for(j=1;j<39;j++)
                b[j]=a[j-1]+a[j]+a[j+1];
            for(j=0;j<40;j++) {
                a[j]=in[b[j]];
                cout << m[a[j]] ;
            }
            cout << endl ;
        }
        if(notc)
            cout << endl ;
    }
    return 0;
}
