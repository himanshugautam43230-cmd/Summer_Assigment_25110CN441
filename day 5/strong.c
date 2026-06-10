#include <stdio.h>

int main() {
    int n, original, remainder, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        remainder = n % 10;

        // Calculate factorial of digit
        fact = 1;
        for(i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if(sum == original)
        printf("%d is a Strong Number", original);
    else
        printf("%d is not a Strong Number", original);

    return 0;
}