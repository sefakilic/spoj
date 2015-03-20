#include <stdio.h>

int main() {
    char c;
    int word; /* is a word currently being read */
    int count; /* count of words on the line */

    count = 0;
    word = 0;
    while(1) {
        c = getchar();
        if (c == EOF) {
            printf("%d\n", count);
            break;
        }
        if (c == '\n') {
            printf("%d\n", count);
            count = 0;
            word = 0;
        }
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (word == 0) {
                word = 1;
                count += 1;
            }
        }
        else {
            word = 0; /* word ended */
        }
    }
    return 0;
}
