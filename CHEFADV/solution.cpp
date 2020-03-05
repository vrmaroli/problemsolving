/* Problem code: CHEFADV
 * URL: https://www.codechef.com/SEPT18B/problems/CHEFADV
 * Author: Vishnu Ramesh Maroli
 * Date: 20180907
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
  int notc;
  cin >> notc;
  while(notc--) {
    int n, m, x, y;
    bool know, pow, know_s, pow_s;
    know = pow = know_s = pow_s = false;
    cin >> n >> m >> x >> y;

    int knowledge = 1, power = 1;
    if(knowledge == n) know = true;
    if(power == m)  pow = true;

    knowledge = 2;
    power = 2;
    if(knowledge == n) know_s = true;
    if(power == m)  pow_s = true;

    knowledge = 1 + ((n / x) * x);
    power = 1 + ((m / y) * y);
    if(knowledge > n) knowledge -= x;
    if(power > m) power -= y;
    if(knowledge == n) know = true;
    if(power == m)  pow = true;

    knowledge = 2 + ((n / x) * x);
    power = 2 + ((m / y) * y);
    if(knowledge > n) knowledge -= x;
    if(power > m) power -= y;
    if(knowledge == n) know_s = true;
    if(power == m)  pow_s = true;

    if((know and pow) or (know_s and pow_s))
      cout << "Chefirnemo" << endl;
    else  cout << "Pofik" << endl;
  }  
  return 0;
}
