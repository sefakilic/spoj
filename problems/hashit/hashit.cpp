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

char table[101][20];
int table_status[101]; // table_Status[i]=0 if ith row in table is empty

int hash(char* s) {
  int h = 0;
  int s_len = strlen(s);
  REP(i, 0, s_len) {
    h += (i+1) * (int)(s[i]);
  }
  return (h*19) % 101;
}

void add(char* s) {
  // check if already in table
  REP(i, 0, 101) {
    if (table_status[i] && strcmp(table[i], s) == 0)
      return;
  }
  // add s to hash table
  int h = hash(s);
  int h2;
  for (int j=0; j<20; ++j) {
    h2 = (h + j*j + 23*j) % 101;
    if (!table_status[h2]) {
      strcpy(table[h2], s);
      table_status[h2] = 1;
      break;
    }
  }
}

void del(char *s) {
  REP(i, 0, 101) {
    if (table_status[i] && strcmp(table[i], s) == 0) {
      table_status[i] = 0;
    }
  }
}

void hashit() {
  int n; // number of operations
  char in[50]; // input str
  
  n = GI;
  REP(i, 0, 101) {
    table_status[i] = 0;
  }
  REP(i, 0, n) {
    scanf("%s", in);
    if (strncmp(in, "ADD", 3) == 0) {
      add(in+4);
    } else if (strncmp(in, "DEL", 3) == 0) {
      // del
      del(in+4);
    }
  }

  int num_keys = 0;
  REP(i, 0, 101)
    if (table_status[i])
      num_keys += 1;
  
  printf("%d\n", num_keys);
  REP(i, 0, 101) {
    if (table_status[i])
      printf("%d:%s\n", i, table[i]);
  }
  
}
int main() {
  int T = GI;
  REP(i,0,T)
    hashit();
  
  return 0;
}
