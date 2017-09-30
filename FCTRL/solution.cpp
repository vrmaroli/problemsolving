//FCTRL

#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int rep,num,zero;
    scanf("%d",&rep);
    while(rep--) {
        scanf("%d",&num);
        int add=5;
        zero=0;
        while( add<=num ) {
            zero+=num/add;
            add*=5;
        }
        printf("%d\n",zero);
    }
    return 0;
}
