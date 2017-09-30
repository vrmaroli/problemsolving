/*
    Problem : 10361_Automatic_Poetry
    URL : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1302
    Created by : Vishnu Ramesh Maroli
    Team : logN
    Date : 23:09:2012
*/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int notc;
    cin >> notc ;
    getchar();
    while(notc--) {
        string l1,l2;
        getline(cin,l1);
        getline(cin,l2);
        size_t pos1=l1.find("<") + 1;
        size_t pos2=l1.substr(pos1).find(">") + 1;
        pos2+=pos1;
        string s2=l1.substr(pos1,pos2-pos1-1);
        string s1=l1.substr(0,pos1-1);
        size_t pos3=l1.substr(pos2).find("<") + 1;
        pos3+=pos2;
        size_t pos4=l1.substr(pos3).find(">") + 1;
        pos4+=pos3;
        string s3=l1.substr(pos2,pos3-pos2-1);
        string s4=l1.substr(pos3,pos4-pos3-1);
        string s5=l1.substr(pos4);
        cout << s1+s2+s3+s4+s5 << endl ;
        cout << l2.substr(0,l2.length()-3) ;
        cout << s4+s3+s2+s5 ;
        cout << endl ;
    }
    return 0;
}
