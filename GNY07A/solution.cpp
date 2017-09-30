// GNY07A
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int notc,tc=0;
    scanf("%d",&notc);
    while(tc<notc ) {
        int del;
        char spell[100];
        scanf("%d %s",&del,spell);
        for( int i=del-1 ; spell[i]!='\0' ; i++ )
            spell[i]=spell[i+1];
        tc++;
    printf("%d %s\n",tc,spell);
    }
    return 0;
}
