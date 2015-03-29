#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  int L, N;
  map<string, string> irregular;
  string str1, str2;
    
    
  cin >> L >> N;
    
  for(int i = 0; i < L; ++i)
    {
      cin >> str1 >> str2;
      irregular[str1] = str2;
    }
    
  for(int i = 0; i < N; ++i)
    {
      cin >> str1;
      char c;
      if(str1.length() > 1)
        {
	  c = str1[str1.length()-2];
        }
        
      if(irregular[str1] != "")
        {
	  cout << irregular[str1] << endl;
        }
        
      else if(str1[str1.length()-1] == 'y' && str1.length() > 1 &&
	      (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'  ))
        {
            
	  str1[str1.length()-1] = 'i';
	  cout << str1 << "es" << endl;
        }
        
      else
        {
	  char c1;
	  if(str1.length() > 1) c1 = str1[str1.length()-2];
	  char c2 = str1[str1.length()-1];
	  if(c2 == 'o' || c2 == 's' || (str1.length() > 1 && c1 == 'c' && c2 == 'h') ||
	     (str1.length() > 1 && c1 == 's' && c2 == 'h') || c2 == 'x')
            {
	      cout << str1 << "es" << endl;
            }
	  else cout << str1 << "s" << endl;
        }
    }
  return 0;
}
    
