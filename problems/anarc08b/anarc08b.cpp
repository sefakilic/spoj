#include <iostream>
#include <string>
using namespace std;

int toDecimal(string str) {
  int numberOfDigits = str.length() / 3;
  int digit;
  int result = 0;
  for(int i = 0; i < numberOfDigits; ++i) {
    string sub = str.substr(i*3, 3);
    if(sub == "063") digit = 0;
    else if(sub == "010") digit = 1;
    else if(sub == "093") digit = 2;
    else if(sub == "079") digit = 3;
    else if(sub == "106") digit = 4;
    else if(sub == "103") digit = 5;
    else if(sub == "119") digit = 6;
    else if(sub == "011") digit = 7;
    else if(sub == "127") digit = 8;
    else if(sub == "107") digit = 9;

    result = result * 10 + digit;
  }
  return result;
}

void printTo7Segment(int x) {
  string str = "";
  int digit;
  while(x > 0) {
    digit = x % 10;
    x = x / 10;
    switch(digit) {
    case 0: str.append("063"); break;
    case 1: str.append("010"); break;
    case 2: str.append("093"); break;
    case 3: str.append("079"); break;
    case 4: str.append("106"); break;
    case 5: str.append("103"); break;
    case 6: str.append("119"); break;
    case 7: str.append("011"); break;
    case 8: str.append("127"); break;
    case 9: str.append("107"); break;
    }
  }
  int numberOfDigits = str.length() / 3;
  for(int i = numberOfDigits-1; i >= 0; --i) {
    cout << str[i*3] << str[i*3+1] << str[i*3+2];
  }
  cout << endl;
}

int main() {
  string line;
  string A;
  string B;
  int a, b;
  size_t plusSignPosition;
  size_t equalSignPosition;

  while(1) {
    getline(cin, line);
    if(line == "BYE") {
      break;
    }

    plusSignPosition = line.find_first_of('+');
    equalSignPosition = line.find_first_of('=');
		
    A = line.substr(0, plusSignPosition);
    B = line.substr(plusSignPosition+1,
		    equalSignPosition-plusSignPosition-1);

    a = toDecimal(A);
    b = toDecimal(B);
    cout << A << "+" << B << "=";
    printTo7Segment(a+b);


  }

  return 0;
}





