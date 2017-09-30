// MIRRORED
#include <iostream>
using namespace std;

int main() {
    char a,b;
    string in;
    cout << "Ready" << endl ;
    while(1) {
        getline( cin , in );
        a=in[0];
        b=in[1];
        if( a==' ' and b==' ' )
            return 0;
        if( a=='p' and b=='q' )
            cout << "Mirrored pair" << endl ;
        else if( a=='q' and b=='p' )
            cout << "Mirrored pair" << endl ;
        else if( a=='d' and b=='b' )
            cout << "Mirrored pair" << endl ;
        else if( a=='b' and b=='d' )
            cout << "Mirrored pair" << endl ;
        else
            cout << "Ordinary pair" << endl ;
    }
    return 0;
}
