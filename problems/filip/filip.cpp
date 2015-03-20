#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  string a;
  string b;

  int intA;
  int intB;

  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  intA = atoi(a.c_str());
  intB = atoi(b.c_str());
  if(a > b) cout << intA << endl;
  else cout << intB << endl;


  return 0;

}

