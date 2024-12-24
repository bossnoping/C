#include <stdio.h>

int main() {
    char c;
    c = getchar();
    if (c > 47 && c < 58){
        printf("Output: digit ");
    }else if (c > 64&& c < 91){
        printf("Output: upper case ");
    }else if (c >= 97 && c <= 122){
        printf("Output: lower case ");
    }else{
        printf("Output: others");
    }
    return 0;
}