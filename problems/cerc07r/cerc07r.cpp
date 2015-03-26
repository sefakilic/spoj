#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> m;
  // rock
  m["Kamen"] = 1;
  m["Rock"] = 1;
  m["Pierre"] = 1;
  m["Stein"] = 1;
  m["Ko"] = m["Koe"] = 1;
  m["Sasso"] = m["Roccia"] = 1;
  m["Guu"] = 1;
  m["Kamien"] = 1;
  m["Piedra"] = 1;
  // scissors
  m["Nuzky"] = 2;
  m["Scissors"] = 2;
  m["Ciseaux"] = 2;
  m["Schere"] = 2;
  m["Ollo"] = m["Olloo"] = 2;
  m["Forbice"] = 2;
  m["Choki"] = 2;
  m["Nozyce"] = 2;
  m["Tijera"] = 2;
  // Paper
  m["Papir"] = 3;
  m["Paper"] = 3;
  m["Feuille"] = 3;
  m["Papier"] = 3;
  m["Papir"] = 3;
  m["Carta"] = m["Rete"] = 3;
  m["Paa"] = 3;
  m["Papier"] = 3;
  m["Papel"] = 3;


  string first_player;
  string second_player;
  string first_symbol;
  string second_symbol;
  int first_player_points;
  int second_player_points;
  string nat;
  bool game_finished = false;
  int game_number = 0;

  while(game_finished == false) {
    game_number += 1;
    cin >> nat >> first_player;
    cin >> nat >> second_player;
    first_player_points = 0;
    second_player_points = 0;
    while(1) {
      cin >> first_symbol;
      if(first_symbol == "-") {
	break;
      }
      else if(first_symbol == ".") {
	game_finished = true;
	break;
      }
      cin >> second_symbol;
      if(m[first_symbol] == m[second_symbol]) {
	continue;
      }
      else {
	if(m[first_symbol] == 1) {
	  if(m[second_symbol] == 2) {
	    first_player_points += 1;
	  }
	  else if(m[second_symbol] == 3) {
	    second_player_points += 1;
	  }
	}
	else if(m[first_symbol] == 2) {
	  if(m[second_symbol] == 1) {
	    second_player_points += 1;
	  }
	  else if(m[second_symbol] == 3) {
	    first_player_points += 1;
	  }
	}
	else if(m[first_symbol] == 3) {
	  if(m[second_symbol] == 1) {
	    first_player_points += 1;
	  }
	  else if(m[second_symbol] == 2) {
	    second_player_points += 1;
	  }
	}
      }
    }
    cout << "Game #" << game_number << ":" << endl;
    cout << first_player << ": " << first_player_points << " point";
    if(first_player_points != 1) {
      cout << "s";
    }
    cout << endl;
        
    cout << second_player << ": " << second_player_points << " point";
    if(second_player_points != 1) {
      cout << "s";
    }
    cout << endl;
    if(first_player_points > second_player_points) {
      cout << "WINNER: ";
      cout << first_player;
    }
    else if(first_player_points < second_player_points) {
      cout << "WINNER: ";
      cout << second_player;
    }
    else {
      cout << "TIED GAME";
    }
    cout << endl;
    if(game_finished == false) {
      cout << endl;
    }
  }

  return 0;
}







    

