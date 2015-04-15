#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
  map<string, int> digits;
  digits["S"] = 0;
  digits["."] = 1;
  digits[".."] = 2;
  digits["..."]       = 3;
  digits["...."]      = 4;
  digits["-"]         = 5;
  digits[". -"]       = 6;
  digits[".. -"]      = 7;  
  digits["... -"]     = 8;
  digits[".... -"]    = 9;
  digits["- -"]       = 10;
  digits[". - -"]     = 11;
  digits[".. - -"]    = 12;
  digits["... - -"]   = 13;
  digits[".... - -"]  = 14;
  digits["- - -"]     = 15;
  digits[". - - -"]   = 16;
  digits[".. - - -"]  = 17;
  digits["... - - -"]     = 18;
  digits[".... - - -"]    = 19;
    
  int n;
  string s;
  stringstream ss;
  string tok;
  vector<int> v;
  int i;
  int vsize;
  unsigned int num;
  while(1) {
    cin >> n;
    //cout << "n= " << n << endl;
    cin.ignore();
    if(n == 0) break;
    v.clear();
    while(n--) {
      getline(cin, s);
      v.push_back(digits[s]);
    }
        
    vsize = v.size();
    //cout << "vsize = " << v.size() << endl;
    num = 0;
    if(vsize > 0)
      num += v[vsize-1];
    if(vsize > 1)
      num += v[vsize-2] * 20;
        
    int x = 360;
    for(i = vsize-3; i >= 0; --i) {
      num += v[i] * x;
      x *= 20;
    }
    cout << num << endl;
      
  }
    
  return 0;
}


