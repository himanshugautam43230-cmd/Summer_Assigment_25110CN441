#include <stdio.h>

int main() {
    int n, i;
    int largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Remove factors of 2
    while(n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }

    // Check for odd factors
    for(i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }

    // If remaining n is a prime number > 2
    if(n > 2) {
        largestPrime = n;
    }

    printf("Largest prime factor = %d\n", largestPrime);

    return 0;
}