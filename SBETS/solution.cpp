// SBETS
#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <string.h>
using namespace std;

int main() {
    string in;
    int notc;
    scanf("%d",&notc);
    getchar();
    while(notc--) {
        int noteams=16;
        vector <string> teams;
        map <string,int> score;
        while( noteams-- ) {
            getline(cin,in);
            int t1,t2;
            t1=t2=0;
            int i=8;
            while( in[i]!=' ' ) {
                t1=t1*10+in[i]-'0';
                i++;
            }
            i++;
            while( in[i]!='\0' ) {
                t2=t2*10+in[i]-'0';
                i++;
            }
            if( t1>t2 )
                score[in.substr(0,3)]++;
            else
                score[in.substr(4,3)]++;
            vector<string>::iterator it=teams.begin();
            bool add1=true,add2=true;
            while( it<teams.end() ) {
                if( it->compare(in.substr(0,3))==0 ) {
                    add1=false;
                }
                if( it->compare(in.substr(4,3))==0 ) {
                    add2=false;
                }
                if( !add1 and !add2 )
                    break;
                it++;
            }
            if( add1 )  teams.push_back(in.substr(0,3));
            if( add2 )  teams.push_back(in.substr(4,3));
        }
        vector<string>::iterator it=teams.begin(),max=it;
        while( it<teams.end() ) {
            if( score[*it]>score[*max] )
                max=it;
            it++;
        }
        cout << *max << endl ;
    }
    return 0;
}
