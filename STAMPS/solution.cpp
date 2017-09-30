// STAMPS
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int notc,i,temp,scen=1;
    scanf("%d",&notc);
    while( scen<=notc ) {
        int ray;
        scanf("%d",&ray);
        int nof;
        scanf("%d",&nof);
        vector<int> lucy;
        for( i=0 ; i<nof ; i++ ) {
            scanf("%d",&temp);
            lucy.push_back(temp);
        }
        sort( lucy.begin() , lucy.end() );
        int out=0;
        vector<int>::reverse_iterator rit;
        rit=lucy.rbegin();
        int sum=0;
        while( rit<lucy.rend() ) {
            sum+=*rit;
            out++;
            if( sum>=ray )
                break;
            rit++;
        }
        printf("Scenario #%d:\n",scen);
        if( sum>=ray )
            printf("%d\n\n",out);
        else
            printf("impossible\n\n");
        scen++;
    }
    return 0;
}
