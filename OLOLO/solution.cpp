// OLOLO
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
    map<long long,bool> num;
    int notc;
    scanf("%d",&notc);
    long long temp,sum=0;
    while( notc-- ) {
        scanf("%lld",&temp);
        sum=sum^temp;
    }
    printf("%lld\n",sum);
    return 0;
}
