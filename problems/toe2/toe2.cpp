#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  char table[3][3];
  int number_of_x;
  int number_of_o;
  int i, j;
  bool x_wins, o_wins;

  while(1) {
    cin >> str;
    if(str == "end") break;
    for(i = 0; i < 3; ++i) {
      table[0][i] = str[i];
    }
    for(i = 0; i < 3; ++i) {
      table[1][i] = str[i+3];
    }
    for(i = 0; i < 3; ++i) {
      table[2][i] = str[i+6];
    }

    number_of_x = 0;
    number_of_o = 0;
    x_wins = false;
    o_wins = false;

    for(i = 0; i < 3; ++i) {
      for(j = 0; j < 3; ++j) {
	if(table[i][j] == 'X') number_of_x += 1;
	else if(table[i][j] == 'O') number_of_o += 1;
      }
    }

    //        cout << number_of_x << " " << number_of_o << endl;

    for(i = 0; i < 3; ++i) {
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
    if(table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X') {
      x_wins = true;
    }
    if(table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O') {
      o_wins = true;
    }

        
    // number of x's should be equal or one more than number of o's
    if(number_of_x == number_of_o || number_of_x == number_of_o + 1) ;
    else {
      cout << "invalid" << endl;
      continue;
    }

    // two players cannot win at the same time
    if(x_wins == true && o_wins == true) {
      cout << "invalid" << endl;
      continue;
    }
        
    // if there is draw, there should be no points in the table
    if((x_wins == false) && (o_wins == false)) {
      if(number_of_x + number_of_o != 9) {
	cout << "invalid" << endl;
	continue;
      }
    }
         
    // if x wins, it is the end of the game, o can not play further.
    if(x_wins && number_of_x == number_of_o) {
      cout << "invalid" << endl;
      continue;
    }
        
    // if o wins, it is the end of the game, x can not play further.
    if(o_wins && number_of_x > number_of_o) {
      cout << "invalid" << endl;
      continue;
    }
    cout << "valid" << endl;
  }
  return 0;
}





