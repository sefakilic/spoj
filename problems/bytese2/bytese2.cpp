#include <stdio.h>
#include <algorithm>
using namespace std;

class pass {
public:
  int time;
  int type; // 1 means in
  // 2 means out
  bool operator < (const pass & x) const {
    return time < x.time;
  }
};

int main() {
  int t;
  pass all_passes[200];
  int n;
  int max_in;
  int current_in;
    
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
        
    for(int i = 0; i < n; ++i) {
      scanf("%d %d", &(all_passes[2*i].time), &(all_passes[2*i+1].time));
      all_passes[2*i].type = 1;
      all_passes[2*i+1].type = 2;
    }
        
    sort(all_passes, all_passes + 2*n);
        
    max_in = current_in = 0;
    for(int i = 0; i < 2*n; ++i) {
      if(all_passes[i].type == 1) {
        current_in += 1;
        if(current_in > max_in)
          max_in = current_in;
      }
      else current_in -= 1;
    }
    printf("%d\n", max_in);
  }
  return 0;
}
        
        
