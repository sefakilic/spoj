#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str1, str2;
    int strLength;
    int arr[26]; // number of occurrences of each letter on string
    int i;
    
    cin >> n;
    while(n--) {
        cin >> str1 >> str2;
        for(i = 0; i < 26; ++i)
            arr[i] = 0;
        strLength = str1.length();
        for(i = 0; i < strLength; ++i) {
            arr[str1[i]-'a'] += 1;
        }
        
        strLength = str2.length();
        for(i = 0; i < strLength; ++i) {
            arr[str2[i]-'a'] -= 1;
        }
        for(i = 0; i < 26; ++i) {
            if(arr[i] != 0)
                break;
        }
        if(i < 26) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}
        
