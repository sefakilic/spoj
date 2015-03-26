#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
  int t;
  int n;
  char landmark_name[50];
  double angles[1000];
  double max_distance;

  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
      scanf("%s %lf", landmark_name, angles+i);
    }
    sort(angles, angles+n);
    max_distance = 0;
    for(int i = 1; i < n; ++i) {
      if(angles[i]-angles[i-1] > max_distance)
	max_distance = angles[i] - angles[i-1];
    }
    if(360 - angles[n-1] + angles[0] > max_distance)
      max_distance = 360 - angles[n-1] + angles[0];

    printf("%d\n", int(ceil((360.0 - max_distance) * 12) ));
  }
  return 0;
}

