#include <iostream>
#include <string>
using namespace std;

int batches[7][2];

int main()
{
    batches[0][0] = 2001;
    batches[0][1] = 2005;
    batches[1][0] = 2002;
    batches[1][1] = 2006;
    batches[2][0] = 2003;
    batches[2][1] = 2007;
    batches[3][0] = 2004;
    batches[3][1] = 2008;
    batches[4][0] = 2005;
    batches[4][1] = 2009;
    batches[5][0] = 2006;
    batches[5][1] = 2010;
    batches[6][0] = 2007;
    batches[6][1] = 2011;
    
    int T;
    int held;
    string str;
    int strleng;
    int strength;
    int x;
    
    cin >> T;
    while(T--)
    {
        cin >> held >> str;
        strleng = str.length();
        strength = 0;
        
        for(int i = 0; i < strleng; ++i)
        {
            if ( batches[ str[i] - 'A' ][1] < held )
            {
                x = held - batches[ str[i] - 'A' ][1];
            }
            else x = held - batches[ str[i] - 'A' ][0];
            strength += (x*x);
            
        }
        cout << strength << endl;
        
        
    }
    return 0;
}
    
        
    
    
