// KINDJ
#include <iostream>
#include <ctype.h>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    char str[1000000];
    while( gets(str) ) {
        int count=0;
        int it=0;
        while( str[it]!='\0' ) {
            if( isalpha(str[it]) ) {
                count++;
                while( isalpha(str[it]) ) {
                    it++;
                }
            }
            it++;
        }
        cout << count << endl ;
    }
    return 0;
}
