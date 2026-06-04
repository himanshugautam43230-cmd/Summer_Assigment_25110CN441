#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Nth Fibonacci term = 0");
    } else if(n == 1) {
        printf("Nth Fibonacci term = 1");
    } else {
        for(int i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}
