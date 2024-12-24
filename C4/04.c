#include <stdio.h>
#include <stdlib.h>
int main()
{
    char money_in[100];
    float cal, money;
    fgets(money_in, 100, stdin);
    money = strtof(money_in, NULL);

    if (money < 0) {
        printf("Error: Salary must be greater or equal to 0\n");
    } else if (money <= 300000) {
        cal = money * 0.5f;  
        printf("%.2f\n", cal);
    } else if (money <= 500000) {
        cal = money * 0.10f;  
        printf("%.2f\n", cal);
    } else {
        cal = 15000 + ((money - 300000) * 0.10f); 
        printf("%.2f\n", cal);
    }

    return 0;
}
