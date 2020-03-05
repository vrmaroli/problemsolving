/*
	Problem code: MAGICHF
	URL: https://www.codechef.com/SEPT18B/problems/MAGICHF
	Author: Vishnu Ramesh Maroli
	Date: 20180907
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <limits>

#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, x, s;
    cin >> n >> x >> s;
    while(s--) {
      int a, b;
      cin >> a >> b;
      if(x == a)
        x = b;
      else if(x == b)
        x = a;
    }
    cout << x << endl;
  }    
	return 0;
}
