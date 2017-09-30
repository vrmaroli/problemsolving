/*
    Problem : 489_Hangman_Judge
    URL : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=430
    Created by : Vishnu Ramesh Maroli
    Team : logN
    Date : 21:09:2012
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    while(1) {
        cin >> n ;
        if(n==-1)
            break;
        cout << "Round " << n << endl ;
        string q,c;
        cin >> q ;
        cin >> c ;
        int i,j;
        bool found=false,won=true;
        int w=0;
        for(i=0;c[i]!='\0';i++) {
            found=false;
            for(j=0;q[j]!='\0';j++) {
                if(c[i]==q[j]) {
                    q[j]=' ';
                    found=true;
                }
            }
            for(j=0;c[j]!='\0';j++)
                if(c[j]==c[i])
                    c[j]=' ';
            if(!found)
                w++;
            won=true;
            for(j=0;q[j]!='\0';j++)
                if(q[j]!=' ')
                    won=false;
            if(w>=7) {
                cout << "You lose." << endl ;
                break;
            }
            else if(won) {
                cout << "You win." << endl ;
                break;
            }
        }
        if(w<7 and !won)
            cout << "You chickened out." << endl ;
    }
    return 0;
}
