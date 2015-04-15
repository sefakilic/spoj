#include <cstdio>
#include <map>
using namespace std;

int a[500001];

int main() {
  map<int, char> usedBefore;
  a[0] = 0;
  usedBefore[0] = 1;
  int tmp;
  int i;
  int j;
  for(i = 1; i <= 500000; ++i) {
    tmp = a[i-1] - i;
    if(tmp > 0 && usedBefore[tmp] != 1) {
      a[i] = tmp;
      usedBefore[tmp] = 1;
    }
    else {
      tmp = a[i-1]+i;
      a[i] = tmp;
      usedBefore[tmp] = 1;
    }
  }
  int inp;
  while(1) {
    scanf("%d", &inp);
    if(inp == -1) break;
    printf("%d\n", a[inp]);
  }
  return 0;
}
        
