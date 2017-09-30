// SAMER08F
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i,sum;
    while(1) {
        scanf("%d",&i);
        if(i==0)
            return 0;
        sum=0;
        while( i>0 ) {
            sum+=i*i;
            i--;
        }
        printf("%d\n",sum);
    }
}
