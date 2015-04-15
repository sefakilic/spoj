#include <cstdio>
#include <set>
#include <map>
using namespace std;
int main() {
    int requestType;
    int client;
    int priority;
    set<int> s;
    map<int, int> m;
    
    while(1) {
        scanf("%d", &requestType);
        if(requestType == 0) break;
        else if(requestType == 1) {
            scanf("%d %d", &client, &priority);
            s.insert(priority);
            m[priority] = client;
        }
        else if(requestType == 2) {
            if(s.size() == 0) {
                printf("0\n");
            }
            else {
                set<int>::iterator iter = --s.end();
                printf("%d\n", m[*iter]);
                s.erase(iter);
            }
        }
        else if(requestType == 3) {
            if(s.size() == 0) {
                printf("0\n");
            }
            else {
                set<int>::iterator iter = s.begin();
                printf("%d\n", m[*iter]);
                s.erase(iter);
            }
        }
    }
    return 0;
}
    
