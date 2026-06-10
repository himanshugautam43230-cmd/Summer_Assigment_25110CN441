#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        
        // spaces print karne ke liye
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars print karne ke liye
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}