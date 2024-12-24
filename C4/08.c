#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char size[5], pep[5], cheese[5], mush[5];
    int diameter;
    float price, cost, area;
    const int fixedcost = 5, basecost = 2;
    float extra = 0;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets (size, sizeof(size), stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets (pep, sizeof(size), stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets (cheese, sizeof(size), stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets (mush, sizeof(size), stdin);

    int s = atoi(size);
    int p = atoi(pep);
    int c = atoi(cheese);
    int m = atoi(mush);

    if (s==1){
        diameter = 10;
    }else if (s==2){
        diameter = 16;
    }else if (s==3){
        diameter = 20;
    }

    if (p==1){
        extra += 0.5;
    }if (c==1){
        extra += 0.25;
    }if (m==1){
        extra += 0.30;
    }
    area = M_PI* (diameter)*(diameter)/4.0 ;
    cost = fixedcost + (basecost*area) + (extra*area);

    price = 1.5*cost;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
    return 0;
}