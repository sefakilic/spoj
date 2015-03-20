#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
  int T;
  string strnum;
  string revstrnum;
    
  unsigned long long  num;
  unsigned long long revnum;
  int steps;
  stringstream ss;
    
  cin >> T;
  while(T--)
    {
      cin >> strnum;
      revstrnum = strnum;
      reverse(revstrnum.begin(), revstrnum.end());
      steps = 0;
        
      while( strnum != revstrnum)
        {
	  //cout << strnum << endl;
	  ss.clear();
	  ss.str(strnum);
	  ss >> num;
	  //cout << "num: " << num << endl;
	  ss.clear();
	  ss.str(revstrnum);
	  ss >> revnum;
	  //cout << "revnum: " << revnum << endl;
            
	  num = num + revnum;
	  steps += 1;
            
            
	  ss.clear();
	  ss.str("");
	  ss << num;
            
            
            
	  strnum = ss.str();
	  //cout << "strnum: " << strnum << endl;
	  //sleep(1);
	  revstrnum = strnum;
	  reverse(revstrnum.begin(), revstrnum.end());
        }
      ss.clear();
      ss.str(strnum);
      ss >> num;
      cout << steps << " " << num << endl;
    }
  return 0;
}
        
    
