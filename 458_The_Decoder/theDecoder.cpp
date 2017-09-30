/*
    Problem : 458_The_Decoder
    URL : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1302
    Created by : Vishnu Ramesh Maroli
    Team : logN
    Date : 18:09:2012
*/

#include <iostream>
using namespace std;
int main() {
    char c;
    while(1) {
        cin.get(c);
        if(cin.eof())
            break;
        if(c!=10 and c!=13)
            cout <<char(c-7) ;
        else if(c=='\n')
            cout << endl ;
    }
    return 0;
}
