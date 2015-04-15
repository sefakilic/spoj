


#include <iostream>
#include <map>
using namespace std;
int main(int argc, char** argv)
{
  int c;
  string  t1, t2;
  int g1, g2;
  map<string, int> wins;
  map<string, int> loses;
  cin >> c;
  for(int i = 0; i < c; ++i) {
    wins.clear();
    loses.clear();
    for(int j = 0; j < 16; ++j) {
      cin >> t1 >> t2 >> g1 >> g2;
      if(g1 > g2) { ++wins[t1]; ++loses[t2]; }
      else { ++wins[t2]; ++loses[t1]; }
    }
    for(map<string,int>::iterator iter = wins.begin(); iter != wins.end(); ++iter) {
      if( loses[iter->first] == 0 ) {
	cout << iter->first << endl;
	break;
      }
    }
  }
  return 0;
}
