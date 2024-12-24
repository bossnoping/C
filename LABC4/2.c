#include <stdio.h>
#include <stdlib.h>

int is_prime(int x) {
    if (x <= 1) return 0;  
    if (x <= 3) return 1;  
    if (x % 2 == 0) return 0; 
    
    for (int i = 3; i <= x/2; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    char input[6];
    fgets(input, 6, stdin);

    int i, n;

    n = atoi(input);
    for (i = 1; i<=n ;i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}