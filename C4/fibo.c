#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    char input[10];
    fgets (input, sizeof(input), stdin);
    int n = atoi(input);
    int i ,fibo;

    for (i = 0; i<=n; i++){
        fibo = (pow(1+sqrt(5),i) - (pow(1-sqrt(5),i)))/pow(2,i)*sqrt(5);
        printf("F(%d) = ", i);
        printf("%d\n", fibo);
    }
    return 0;
}