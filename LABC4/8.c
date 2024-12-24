#include <stdio.h>
#include <stdlib.h>
void binary(int n) {
    if (n == 0) {
        return; 
    }
    binary(n / 2); 
    printf("%d", n % 2);  
}

int main() {
    char input[100];
    fgets(input, 100, stdin);
    int num = atoi(input);

    if (num == 0) {
        printf("0"); 
    } else {
        binary(num);
    }

    return 0;
}
