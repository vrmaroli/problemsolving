// DONOTHIN
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long N,M,sum,ssum;
    while(1) {
        scanf("%lld",&N);
        scanf("%lld",&M);
        if( N==-1 and M==-1 )
            return 0;
        sum=0;
        ssum=0;
        int temp;
        for( long long i=0 ; i<N ; i++ ) {
            scanf("%d",&temp);
            sum+=temp;
            ssum+=sum;
        }
        printf("%lld\n",ssum*M);
    }
    return 0;
}
