#include <stdio.h>
#include <stdlib.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    char input1[20], input2[20];
    fgets(input1, sizeof(input1), stdin);
    fgets(input2, sizeof(input2), stdin);
    long long a = atoll(input1);
    long long b = atoll(input2);

    if (a <= 0 || b <= 0) {
        return 1;
    }

    long long gcd_result = gcd(a, b);
    long long lcm_result = (a / gcd_result) * b; 
    printf("GCD: %lld\n", gcd_result);
    printf("LCM: %lld\n", lcm_result);

    return 0;
}
