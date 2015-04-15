#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int t;  // number of test cases
    int n;  // number of people
    int w;  // capacity
    int current_capacity;
    int on_board = 0;
    int i;
    int people[10000];

    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &w);
        for(i = 0; i < n; ++i) {
            scanf("%d", &(people[i]));
        }

        sort(people, people + n);
        current_capacity = 0;
        on_board = 0;
        for(i = 0; i < n; ++i) {
            if(current_capacity + people[i] <= w) {
                current_capacity += people[i];
                on_board += 1;
            }
            else break;
        }

        printf("%d\n", on_board);
    }
    return 0;
}

