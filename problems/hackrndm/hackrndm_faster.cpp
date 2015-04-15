/* This one has faster implementation of binary search to find the number of
   occurrences of an integer n. The straightforward solution (HACKRNDM.cpp) has
   binary_search to find the position of n in the sorted array, and moving both to
   the left and right to count total number of occurrences of n.

   This faster binary_search implementation returns the positions for largest number
   smaller than n (lower_boundary), and smallest number larger than n
   (upper_boundary). In other words, those two functions returns boundaries for the
   occurrences of n in the sorted array.

*/

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

int lower_boundary(int* arr, int low, int high, int n) {
  if (low>high) return high;
  int mid = (low+high)/2;
  if (arr[mid] < n) 
    return lower_boundary(arr, mid+1, high, n);
  else
    return lower_boundary(arr, low, mid-1, n);

}

int upper_boundary(int* arr, int low, int high, int n) {
  if (low>high) return low;
  int mid = (low+high)/2;
  if (arr[mid] > n)
    return upper_boundary(arr, low, mid-1, n);
  else
    return upper_boundary(arr, mid+1, high, n);
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
    int lb = lower_boundary(arr, i+1, n-1, arr[i]+k);
    int ub = upper_boundary(arr, i+1, n-1, arr[i]+k);
    //printf("%d %d %d\n", arr[i]+k, lb, ub);
    if (ub-lb-1 > 0)
      cnt += ub-lb-1;
  }
  printf("%d\n", cnt);
  return 0;
}
