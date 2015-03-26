#include <cstdio>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
  map<string, int> o;
  map<int, int> m;
  char x[21];
  string str;
  int n;
  int l;
  int i;

  while(1) {
    o.clear();
    m.clear();

    scanf("%d %d", &n, &l);
    if(n == 0 && l == 0)
      break;

    //cin.ignore();
    char c = 0;
    while(c != '\n') {
      c = getchar();
    }

    for(i = 0; i < n; ++i) {
      gets(x);

      string str(x);

      if(o[str] == 0) {
	o[str] = 1;
	m[1] = m[1] += 1;
      }
      else {
	o[str] += 1;
	m[o[str]-1] -= 1;
	m[o[str]] += 1;
      }
    }

    for(i = 0; i < n; ++i) {
      printf("%d\n", m[i+1]);
    }
  }
  return 0;
}





