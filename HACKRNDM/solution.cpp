// HACKRNDM
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int non;
    scanf("%d",&non);
    int diff,count=0,temp;
    scanf("%d",&diff);
    vector<int> nums;
    int i=0;
    while( i<non ) {
        scanf("%d",&temp);
        nums.push_back(temp);
        i++;
    }
    sort(nums.begin(),nums.end());

    vector<int>::iterator it;
    it=nums.begin();
    while( it<nums.end() ) {
        if(binary_search(nums.begin(),nums.end(),*it+diff))
            count++;
        it++;
    }
    printf("%d\n",count);
    return 0;
}
