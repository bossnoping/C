#include <stdio.h>
#include <stdlib.h>
void rangoli(int n) {
    if (n <= 0 || n > 26) {
        printf("-\n");
        return;
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < 2 * i; j++) {
            printf("-");
        }
        
        char ch = 'a' + n - 1;
        for (int j = 0; j < n - i; j++) {
            printf("%c", ch);
            if (j < n - i - 1) {
                printf("-");
            }
            ch--;
        }
        
        ch += 2;
        for (int j = 0; j < n - i - 1; j++) {
            printf("-");
            printf("%c", ch);
            ch++;
        }
        
        for (int j = 0; j < 2 * i; j++) {
            printf("-");
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf("-");
        }
        
        char ch = 'a' + n - 1;
        for (int j = 0; j < n - i; j++) {
            printf("%c", ch);
            if (j < n - i - 1) {
                printf("-");
            }
            ch--;
        }
        
        ch += 2;
        for (int j = 0; j < n - i - 1; j++) {
            printf("-");
            printf("%c", ch);
            ch++;
        }
        for (int j = 0; j < 2 * i; j++) {
            printf("-");
        }
        printf("\n");
    }
    

}

int main() {
    char input[3];
    fgets(input, 3 , stdin);
    int n = atoi(input);
    rangoli(n);
    return 0;
}
