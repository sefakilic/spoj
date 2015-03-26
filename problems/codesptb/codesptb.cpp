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

LL count_split_inv(int* array, int na, int nb) {
  int* new_arr = (int*) malloc((na+nb) * sizeof(int));
  LL num_inversions = 0;
  int index_a = 0;
  int index_b = na;
  REP(i, 0, na+nb) {
    if (index_a >= na) {
      // if all elements of A are already inserted, insert rest of B
      while (index_b < na+nb)
	new_arr[i++] = array[index_b++];
      break;
    }
    if (index_b >= na + nb) {
      // if all elements of B are already inserted, insert rest of A
      while (index_a < na)
	new_arr[i++] = array[index_a++];
      break;
    }
    if (array[index_a] <= array[index_b]) {
      new_arr[i] = array[index_a++];
    } else {
      num_inversions += (na-index_a);
      new_arr[i] = array[index_b++];
    }
  }
  /*
  printf("na = %d, nb = %d\n", na, nb);
  printf("array: ");
  REP(i, 0, na+nb)
    printf("%d ", array[i]);
  printf("\n");
  printf("new_arr: ");
  REP(i, 0, na+nb)
    printf("%d ", new_arr[i]);
  printf("\n");
  */
  
  REP(i, 0, na+nb) {
    array[i] = new_arr[i];
  }
  free(new_arr);
  
  return num_inversions;
}

LL count_inversions(int* array, int n) {
  if (n <= 1)
    return 0;
  
  LL x = count_inversions(array, n/2);
  LL y = count_inversions(array+n/2, n-n/2);
  LL z = count_split_inv(array, n/2, n-n/2);
  return x + y + z;
}

int main(int argc, char *argv[]) {
  int array[250000];
  int n;
  int t;
  t = GI;
  while (t--) {
    n = GI;
    REP(i,0,n)
      array[i] = GI;
    printf("%lld\n", count_inversions(array, n));
  }
  return 0;
}
