#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> h;
    int tmp, tmp2;
    int happies = 0;
    
    for(int can = 1; happies < 500 ; ++can)
    {
        v.clear();
        tmp = can;
        v.push_back(tmp);
        while(tmp != 1)
        {
            
            tmp2 = 0;
            while(tmp > 0)
            {
                tmp2 = tmp2 + ( (tmp%10) * (tmp%10) );
                tmp /= 10;
            }
            tmp = tmp2;
            if ( find(v.begin(), v.end(), tmp) != v.end() )
                break;
            else v.push_back(tmp);
        }
        
        if(tmp == 1)
        {
            h.push_back(can);
            happies+=1;
        }
    }
    int T;
    int x;
    
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &x);
        printf("%d\n", h[x-1]);
    }
    
    return 0;
}
        
            
        
