/*
    Problem : 644_Immediate_Decodability
    URL : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=585
    Created by : Vishnu Ramesh Maroli
    Team : logN
    Date : 23:09:2012
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector <string> data;
    string s;
    int i=1;
    while(cin >> s) {
        if(s!="9")
            data.push_back(s);
        else {
            bool decodable=true;
            vector<string>::iterator it,jt;
            for(it=data.begin();it<data.end();it++)
                for(jt=data.begin();jt<data.end();jt++)
                    if(it!=jt)
                        if((*it).find(*jt)==0) {
                            decodable=false;
                            break;
                        }
            if(decodable) {
                cout << "Set "<< i++ <<" is immediately decodable" << endl ;
            }
            else {
                cout << "Set "<< i++ <<" is not immediately decodable" << endl ;
            }
            data.erase(data.begin(),data.begin()+data.size());
        }
    }
    return 0;
}
