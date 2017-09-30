// QUALITY
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long a1,b1,c1;
    int a2,b2,c2,team=1;
    while( scanf("%lld",&a1)!=EOF ) {
        int time=0,num=0;
        scanf("%lld",&b1);
        scanf("%lld",&c1);
        scanf("%d",&a2);
        scanf("%d",&b2);
        scanf("%d",&c2);
        if(a1) {
            time+=1200*(a2-1);
            num++;
        }
        if(b1) {
            time+=1200*(b2-1);
            num++;
        }
        if(c1) {
            time+=1200*(c2-1);
            num++;
        }
        time+=a1+b1+c1;
        printf("team %d: %d, %d\n",team++,num,time);
    }
    return 0;
}
