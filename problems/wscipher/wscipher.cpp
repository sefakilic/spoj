#include <stdio.h>
#include <string.h>


int main() {
  int k1, k2, k3;
  char str[81];
  int group[80];
  char chars[80];

  int group_size;
  int length;
    
  while(1) {
    scanf("%d %d %d", &k1, &k2, &k3);
    if(k1 == 0 && k2 == 0 && k3 == 0)
      break;
            
    scanf("%s", str);
    length = strlen(str);
        
    // type1
    group_size = 0;
    for(int i = 0; i < length; ++i) {
      if(str[i] >= 'a' && str[i] <= 'i') {
	group[group_size] = i;
	chars[group_size] = str[i];
	group_size += 1;
      }
    }
        
    for(int i = 0; i < group_size; ++i) {
      int new_index = group[( i+k1 ) % group_size];
      str[new_index] = chars[i];
    }
        
    // type2
    group_size = 0;
    for(int i = 0; i < length; ++i) {
      if(str[i] >= 'j' && str[i] <= 'r') {
	group[group_size] = i;
	chars[group_size] = str[i];
	group_size += 1;
      }
    }
        
    for(int i = 0; i < group_size; ++i) {
      int new_index = group[( i+k2 ) % group_size];
      str[new_index] = chars[i];
    }
        
    // type3
    group_size = 0;
    for(int i = 0; i < length; ++i) {
      if( (str[i] >= 's' && str[i] <= 'z') || str[i] == '_') {
	group[group_size] = i;
	chars[group_size] = str[i];
	group_size += 1;
      }
    }
        
    for(int i = 0; i < group_size; ++i) {
      int new_index = group[( i+k3 ) % group_size];
      str[new_index] = chars[i];
    }
    printf("%s\n", str);
        
  }
  return 0;
}
            
        
        
        
                
