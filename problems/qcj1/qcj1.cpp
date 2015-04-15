#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string lines[20];
  int n;
  int i;
    
  cin >> n;
  cin.ignore();
  cin.ignore();
  for(i = 0; i < n; ++i) {
    getline(cin, lines[i]);

  }
  int walk_distance = 0;
  while(1) {
    for(i = 0; i < n; ++i) {
      if(lines[i].length() > walk_distance && lines[i][walk_distance] != ' ')
	break;
    }
    if(i == n)
      break;
        
    walk_distance += 1;
  }
    
    
  printf("Total Walk Distance = %d\n", walk_distance);  
    
  walk_distance = 0;
  char prev_move = 0;
  int repetitions = 0;
  char new_move;
    
  for(i = 0; i < n; ++i) {
    if(lines[i].length() > walk_distance && lines[i][walk_distance] != ' ')
      break;
  }
  prev_move = lines[i][walk_distance];
  repetitions = 1;        
  walk_distance += 1;
        
  while(1) {
    for(i = 0; i < n; ++i) {
      if(lines[i].length() > walk_distance && lines[i][walk_distance] != ' ')
	break;
    }
    if(i == n)
      break;
        
    new_move = lines[i][walk_distance];
    if(new_move == prev_move) {
      repetitions += 1;
    }
    else {
      switch(prev_move) {
      case '/': printf("Up "); break;
      case '\\': printf("Down "); break;
      case '_': printf("Walk "); break;
      }
      printf("%d steps\n", repetitions);
            
      prev_move = new_move;
      repetitions = 1;
    }
        
    walk_distance += 1;
  }
  switch(prev_move) {
  case '/': printf("Up "); break;
  case '\\': printf("Down "); break;
  case '_': printf("Walk "); break;
  }
  printf("%d steps\n", repetitions);
        
    
  return 0;
}
    
        

