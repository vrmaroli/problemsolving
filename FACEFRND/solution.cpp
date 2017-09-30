// FACEFRND
#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
using namespace std;

int main() {
    int nof,it,temp;
    it=0;
    map<int,bool>frnd;
    vector<int> fof;
    scanf("%d",&nof);
    while( it<nof ) {
        scanf("%d",&temp);
        frnd[temp]=true;
        int noff;
        scanf("%d",&noff);
        int j=0;
        while( j<noff ) {
            scanf("%d",&temp);
            bool flag=true;
            vector<int>::iterator iter;
            iter=fof.begin();
            while( iter<fof.end() ) {
                if( temp==*iter ) {
                    flag=false;
                    break;
                }
                iter++;
            }
            if( flag )
                fof.push_back(temp);
            j++;
        }
        it++;
    }
    int count=0;
    vector<int>::iterator iter;
    iter=fof.begin();
    while( iter<fof.end() ) {
        if( !frnd[*iter] )
            count++;
        iter++;
    }
    printf("%d\n",count);
    return 0;
}
