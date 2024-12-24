#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_n[10];
    fgets(input_n, sizeof(input_n), stdin);
    int n = atoi(input_n);

    // Check for invalid input
    if (n <= 0 || n > 26) {
        printf("-");
        return 0;
    }

    // Print the decreasing sequence
    for (int i = 0; i < n; i++) {
        printf("%c", 'a' + n - 1 - i);
        if (i < n - 1) {
            printf("-");
        }
    }

    // Print the increasing sequence
    for (int i = 1; i < n; i++) {
        printf("-%c", 'a' + i);
    }

    return 0;
}
    
