#include <stdio.h>
#include <string.h>

int is_near_palindrome(char* str, int len) {
    int left = 0;
    int right = len-1;
    int letter_change = 0;
    
    while(left <= right) {
        if(str[left] == str[right]) ;
        else {
            if(letter_change == 0) {
                letter_change = 1;
            }
            else return 0;
        }
        ++left;
        --right;
    }
    if(letter_change == 1) {
        return 1;
    }
    if(letter_change == 0 && len % 2 == 1)
        return 1;
    return 0;
}    
int main() {
    char str[26] ;
    int len;
    int i;
    int j;
    
    while(1) {
        scanf("%s", str);
        if(strcmp(str, "*END*") == 0)
            break;
        
        len = strlen(str);
        
        for(i = 1; i < len; ++i) {
            if( is_near_palindrome(str, i) && is_near_palindrome(str+i, len-i) )
                break;
        }
        if(i == len) {
            printf("%s is not ", str);
        }
        else printf("%s is ", str);
        printf("a double near palindrome.\n");
    }
    return 0;
}
