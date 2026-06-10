#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    while(n != 0) {
        n /= 10;
        digits++;
    }

    n = original;

    // Calculate sum of powers
    while(n != 0) {
        remainder = n % 10;
        result += pow(remainder, digits);
        n /= 10;
    }

    if(result == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

    return 0;
}