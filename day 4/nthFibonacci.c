#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Nth Fibonacci term = 0");
    } else if(n == 1) {
        printf("Nth Fibonacci term = 1");
    } else {
        for(i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}