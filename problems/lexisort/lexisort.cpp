#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string arr[50000];
int main()
{
    int k;
    int n;
    
    scanf("%d", &k);
    while(k--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        
        sort(arr, arr+n);
        for(int i = 0; i < n; ++i)
            cout << arr[i] << endl;
    }
    return 0;
}
    
