#include <stdio.h>

int main (){
    char input_n[10];
    printf("#size N = ");
    fgets(input_n, 10, stdin);
    int n = atoi(input_n);

    char c;
    c = (char)n; // c = 'a'
    c = n; // c = 'a'
    printf("%c", n); // a


    return 0 ;
}