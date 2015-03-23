#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
  map<string, int> m;
  string line;
  string s;
  int lineLength;
  stringstream ss;
  int numberOfDifferentWords = 0;
  int numberOfGames = 0;

  while(getline(cin, line)) {
    lineLength = line.length();
    for(int i = 0; i < lineLength; ++i) {
      if( (line[i] >= 'a' && line[i] <= 'z') ) ;
      else if (line[i] >= 'A' && line[i] <= 'Z') {
	line[i] = line[i]-'A' + 'a';
      }
      else {
	line[i] = ' ';
      }
    }
    ss.clear();
    ss.str("");
    ss << line;
    while(ss >> s) {
      if(s == "bullshit") {
	numberOfDifferentWords += m.size();
	m.clear();
	numberOfGames += 1;
      }

      else {
	m[s] = m[s] + 1;
      }
      //cout << s << endl;
    }
  }
    
  for(int i = 2; i <= numberOfGames; ++i) {
    if(numberOfGames / i * i == numberOfGames &&
       numberOfDifferentWords / i * i == numberOfDifferentWords) {
      numberOfGames /= i;
      numberOfDifferentWords /= i;
      i = i - 1;
    }
  }
    
  cout << numberOfDifferentWords << " / " << numberOfGames << endl;
  return 0;
}




