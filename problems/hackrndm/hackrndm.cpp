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

int binary_search(int* arr, int left, int right, int n) {
  if (left>right)
    return -1;
  int mid = (left+right)/2;
  if (arr[mid]==n)
    return mid;
  if (arr[mid]<n)
    return binary_search(arr, mid+1, right, n);
  else
    return binary_search(arr, left, mid-1, n);
}

int main() {
  int n,k;
  int* arr;
  int cnt = 0;
  n = GI;
  k = GI;
  arr = (int*) malloc(n * sizeof(int));
  REP(i,0,n)
    arr[i] = GI;
  sort(arr, arr+n); // sort the array
  // binary search of k-x for every x in the array
  REP(i,0,n) {
    int p = binary_search(arr, i+1, n-1, arr[i]+k);
    if (p != -1) {
      cnt += 1;
      int tmpi = p-1;
      while (tmpi >= 0 && arr[tmpi] == arr[i]+k) {
	cnt++;
	tmpi--;
      }
      tmpi = p+1;
      while (tmpi < n && arr[tmpi] == arr[i]+k) {
        cnt++;
	tmpi++;
      }
    }
  }
  printf("%d\n", cnt);
  return 0;
}
