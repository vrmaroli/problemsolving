/*
	Problem code: FIBOSUM
	URL: http://www.spoj.com/problems/FIBOSUM/
	Author: Vishnu Ramesh Maroli
	Date: 1st October 2017
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

#define MOD 1000000007

using namespace std;

map<ll, ll> fiboMemoizationTable;

ll fibonacci(ll num) {
	if (fiboMemoizationTable.count(num))
		return fiboMemoizationTable[num];
	else {
		ll half = ( num % 2 == 0 ) ? num / 2 : ( num / 2 ) + 1;
		ll p1 = fibonacci( half ) % MOD;
		ll p2 = fibonacci( half - 1 ) % MOD;
		if( num % 2 == 0 )
			fiboMemoizationTable[num] = ((2 * p2 + p1) * p1) % MOD;
		else
		  fiboMemoizationTable[num] = (p2*p2 + p1*p1) % MOD;
		return fiboMemoizationTable[num];
	}
}

int main() {
	fiboMemoizationTable[0] = 0;
	fiboMemoizationTable[1] = 1;
	ll notc, m, n;
	cin >> notc;
	while (notc--) {
		cin >> n >> m;
		ll sumToN = (fibonacci(n + 1) - 1)%1000000007;
		ll sumToM = (fibonacci(m + 2) - 1)%1000000007;
		ll sum = (sumToM - sumToN)%1000000007;
		cout << (sum+1000000007)%1000000007 << endl;
	}
	return 0;
}
