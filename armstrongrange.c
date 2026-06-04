#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, original, remainder, n;
    double result;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    for(num = low; num <= high; num++) {
        original = num;
        n = 0;
        result = 0;

        // Count digits
        while(original != 0) {
            original /= 10;
            n++;
        }

        original = num;

        // Check Armstrong
        while(original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }

        if((int)result == num)
            printf("%d ", num);
    }

    return 0;
}