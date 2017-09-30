/*
	Problem code: PRIME1
	URL: http://www.spoj.com/problems/PRIME1/
	Author: Vishnu Ramesh Maroli
	Date: 30 September 2017
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

using namespace std;

int main() {
	int notc;
	cin >> notc;
	while(notc--) {
		ll m, n;
		cin >> m >> n;
		ll i = m;
		while(i <= n) {
			ll j = 2, k = sqrt(i);
			bool prime = true;
			while (j <= k and prime) {
				if (i%j==0)
					prime = false;
				j++;
			}
			if(prime and i!=1) {
				cout << i << endl ;
			}
			i++;
		}
		if(notc)
		cout << endl ;
	}
	return 0;
}
