#include <stdio.h>
#include <string.h>
char str[1000001];
int main() {
  int left, right, ml, used;
  int cnt[256];
  int n;
  int i;
  char c;
 
  while(1) {
    scanf("%d", &n);
    if (n==0) break;
    scanf("\n");
    gets(str);
    //	printf("|%s|\n", str);
    left = right = used = ml = 0;
    for(i = 0; i < 256; ++i)
      cnt[i] = 0;
		
    for(i = 0; i < strlen(str); ++i) {
      if(used < n) {
	if(cnt[str[i]] == 0) {
	  cnt[str[i]] += 1;
	  used += 1;
	  right += 1;
	} else {
	  cnt[str[i]] += 1;
	  right += 1;
	}
      } else {
	if(cnt[str[i]] == 0) {
	  cnt[str[i]] += 1;
	  right += 1;
	  used += 1;
	  /* remove from left */
	  while(cnt[str[left]] > 1) {
	    cnt[str[left]] -= 1;
	    left += 1;
	  }
	  /* cnt[str[left]] = 1 */
	  cnt[str[left]] = 0;
	  left += 1;
	  used -= 1;
	} else {
	  cnt[str[i]] += 1;
	  right += 1;
	}
      }
      if(right - left > ml)
	ml = right - left;
    }
    printf("%d\n", ml);
  }
 
  return 0;
}
 
