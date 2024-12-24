#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 1;
    float total = 0.0;
    char input_a[10] , input_m[10];
    printf("Enter your goal amount: ");
    fgets( input_a, 10, stdin);
    float a = atof(input_a);
    while (total <= a){
        printf("Enter money collected today: ");
        fgets( input_m , 10 , stdin);
        float m = atof(input_m);
        total = total + m;
        if (total >= a){
            if (count == 1){
                printf("Congratulations! You take %d day to reach your goal.", count);
                break;
            }
            printf("Congratulations! You take %d days to reach your goal.", count);
            break;
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, total, a-total);
        count += 1;
        continue;

        return 0;
    }

}