// EGYPIZZA
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int nof;
    cin >> nof ;
    getchar();
    int z,x,c;
    z=x=c=0;
    int pizza=0;
    char i,o,p;
    while( nof-- ) {
        scanf("%c%c%c",&i,&o,&p);
        getchar();
        if( i=='3' and p=='4' ) z++;
        if( i=='1' and p=='2' ) x++;
        if( i=='1' and p=='4' ) c++;
    }
    pizza+=z;
    c-=z;
    if( x%2==0 ) {
        pizza+=x/2;
    }
    else {
        pizza+=x/2;
        pizza+=1;
        if( c>=2 )  c-=2;
        if( c==1 )  c--;
    }
    if( c>0 ) {
        pizza+=c/4;
        if( c>0 and c%4!=0 )   pizza+=1;
    }
    cout << pizza+1 << endl ;
    return 0;
}
