#include <iostream>
#include <string>
using namespace std;

string rules[3][6];

int main()
{
  rules[0][0] = "o";
  rules[0][1] = "amos";
  rules[0][2] = "o";
  rules[0][3] = "emos";
  rules[0][4] = "o";
  rules[0][5] = "imos";
  rules[1][0] = "as";
  rules[1][1] = "Ais";
  rules[1][2] = "es";
  rules[1][3] = "Eis";
  rules[1][4] = "es";
  rules[1][5] = "Is";
  rules[2][0] = "a";
  rules[2][1] = "an";
  rules[2][2] = "e";
  rules[2][3] = "en";
  rules[2][4] = "e";
  rules[2][5] = "en";
    
  string trueword;
  int col;
  string word;
  int wordlen;
  string desc1, desc2, desc3;
  string word2;
  int row;
    
  while(cin >> word >> desc1 >> desc2 >> desc3 >> word2)
    {
      wordlen = word.length();
      if(desc1 == "first") row = 0;
      else if(desc1 == "second") row = 1;
      else if(desc1 == "third") row = 2;
        
      if(desc3 == "singular:") col = 0;
      else if(desc3 == "plural:") col = 1;
        
      if(word[wordlen-3] == 'a')
        {
	  if (col == 0)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][0];
            }
	  else if(col == 1)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][1];
            }
        }
      else if(word[wordlen-3] == 'e')
        {
	  if (col == 0)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][2];
            }
	  else if(col == 1)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][3];
            }
        }
      else if(word[wordlen-3] == 'i')
        {
	  if (col == 0)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][4];
            }
	  else if(col == 1)
            {
	      trueword = word.substr(0, wordlen-3) + rules[row][5];
            }
        }
        
      if(word2 == trueword) cout << "correct" << endl;
      else {
	cout << "incorrect, should be " << trueword << endl;
      }
    }
  return 0;
}
        
