#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits, result;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers in the range:\n");

    for(i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        result = 0;

        // Count digits
        while(temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = i;

        // Calculate sum of powers
        while(temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if(result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}