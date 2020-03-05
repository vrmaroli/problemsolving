/* Problem code: paradoxpath
 * URL:
 * Author: Vishnu Ramesh Maroli
 * Date: 5 Mar 2020
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

int FindPath(
  const int nStartX,
  const int nStartY,
  const int nTargetX,
  const int nTargetY,
  const unsigned char* pMap,
  const int nMapWidth,
  const int nMapHeight,
  int* pOutBuffer,
  const int nOutBufferSize
) {
  return 9;
}

int main() {
  unsigned char pMap0[] = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1};
  int pOutBuffer0[12];
  cout << FindPath(0, 0, 1, 2, pMap0, 4, 3, pOutBuffer0, 12) << endl;

  unsigned char pMap1[] = {0, 0, 1, 0, 1, 1, 1, 0, 1};
  int pOutBuffer1[7];
  cout << FindPath(2, 0, 0, 2, pMap1, 3, 3, pOutBuffer1, 7) << endl;
  return 0;
}
