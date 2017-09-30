// NOTATRI
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int sticks,temp,i;
    while(1) {
        scanf("%d",&sticks);
        if( sticks==0 )
            return 0;
        vector<int> len;
        int count=0;
        i=0;
        while( i<sticks ) {
            scanf("%d",&temp);
            len.push_back(temp);
            i++;
        }
        sort(len.begin(),len.end());
        vector<int>::iterator it,jt,kt;
        it=len.begin();
        while( it<len.end() ) {
            jt=it+1;
            while( jt<len.end() ) {
                kt=upper_bound(jt+1,len.end(),*it+*jt);
                count+=(int)len.size()-((int)(kt-len.begin()));
                jt++;
            }
            it++;
        }
        printf("%d\n",count);
    }
    return 0;
}
