#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // GCD using Euclidean method
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    // LCM formula
    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}