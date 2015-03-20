#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <climits>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define GI ({int t; scanf("%d", &t); t;})
#define GF ({double t; scanf("%lf", &t); t;})
#define GLL ({LL t; scanf("%lld", &t); t;})
#define REP(i,a,b) for(int i=a; i<b; i++)
#define ALL(v) (v).begin(), (v).end()
#define pb push_back
#define INF (int)1e9
#define EPS (double) (1e-9)
#define PI (3.141592653589793)

int bsearch_helper(int* arr, int low, int high, int q) {
  if (low > high)
    return -1;
  int mid = (low+high) / 2;
  if (q == arr[mid]) {
    // search for lower index
    int lower_index = bsearch_helper(arr, low, mid-1, q);
    if (lower_index == -1)
      return mid;
    else
      return lower_index;
  }
  else if (q < arr[mid]) {
    return bsearch_helper(arr, low, mid-1, q);
  }
  else
    return bsearch_helper(arr, mid+1, high, q);
}

int bsearch(int* arr, int arr_size, int q) {
  // Given a sorted array and its size, search the element q in the array.
  // If found, return the index, otherwise -1
  return bsearch_helper(arr, 0, arr_size-1, q);
}

int main() {
  int n, q;
  int query;
  n = GI;
  q = GI;
  int* arr = (int *) malloc(n * sizeof(int));
  REP(i,0,n) {
    arr[i] = GI;
  }
  REP(i,0,q) {
    query = GI;
    printf("%d\n", bsearch(arr, n, query));
  }
  return 0;
}
