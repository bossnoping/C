#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_n[12], input_x[12];
    fgets(input_n, sizeof(input_n), stdin);
    fgets(input_x, sizeof(input_x), stdin);

    int n = atoi(input_n);
    int x = atoi(input_x);

    if (n < 1 || x < 2) {
        return 1;
    }

    // Print the top edge
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // Print the middle part
    for (int j = 1; j < x - 1; j++) {
        for (int k = 0; k < j; k++) {
            printf(" ");
        }
        printf("*");
        for (int q = 0; q < n - 2; q++) {
            printf(" ");
        }
        if (n > 1) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom edge
    for (int p = 0; p < x - 1; p++) {
        printf(" ");
    }
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
