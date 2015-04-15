#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string row1, row2, row3;
  int number_of_x;
  int number_of_o;
  bool x_wins;
  bool o_wins;
  int table[3][3];

  cin >> n;
  while(n--) {
    cin >> row1 >> row2 >> row3;
    number_of_x = 0;
    number_of_o = 0;
    x_wins = false;
    o_wins = false;
    for(int i = 0; i < 3; ++i) {
      if(row1[i] == 'X') number_of_x += 1;
      else if(row1[i] == 'O') number_of_o += 1;
      else; 
    }
    for(int i = 0; i < 3; ++i) {
      if(row2[i] == 'X') number_of_x += 1;
      else if(row2[i] == 'O') number_of_o += 1;
      else; 
    }
    for(int i = 0; i < 3; ++i) {
      if(row3[i] == 'X') number_of_x += 1;
      else if(row3[i] == 'O') number_of_o += 1;
      else; 
    }

    if(number_of_x == number_of_o ||
       number_of_x == number_of_o + 1) ;
    else {
      cout << "no" << endl;
      continue;
    }

    table[0][0] = row1[0];
    table[0][1] = row1[1];
    table[0][2] = row1[2];

    table[1][0] = row2[0];
    table[1][1] = row2[1];
    table[1][2] = row2[2];
        
    table[2][0] = row3[0];
    table[2][1] = row3[1];
    table[2][2] = row3[2];
    
    for(int i = 0; i < 3; ++i) {
      if(table[i][0] == 'X' && table[i][1] == 'X' && table[i][2] == 'X')
	x_wins = true;
      if(table[i][0] == 'O' && table[i][1] == 'O' && table[i][2] == 'O')
	o_wins = true;
      if(table[0][i] == 'X' && table[1][i] == 'X' && table[2][i] == 'X')
	x_wins = true;
      if(table[0][i] == 'O' && table[1][i] == 'O' && table[2][i] == 'O')
	o_wins = true;
    }

    if(table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X') {
      x_wins = true;
    }
    if(table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O') {
      o_wins = true;
    }

    if(x_wins == true && o_wins == true) {
      cout << "no" << endl;
      continue;
    }

    if(o_wins && number_of_x > number_of_o) {
      cout << "no" << endl;
      continue;
    }
    if(x_wins && number_of_x == number_of_o) {
      cout << "no" << endl;
      continue;
    }
        
    cout << "yes" << endl;
  }
  return 0;
}





