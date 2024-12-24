#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[10] ;
    fgets(input , 10, stdin);
    int n = atoi(input);
    for (int i = 0; i<n ; i++ ){
        for (int j = 0; j<=i ; j++){
            printf("*");
        }
        printf("\n");
        }
    for (int i = n - 1; i>0 ; i--){
        for (int j=0; j<i ; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0; 
}