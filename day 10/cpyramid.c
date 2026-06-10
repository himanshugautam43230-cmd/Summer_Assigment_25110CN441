#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for(i = 1; i <= n; i++) {

        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // increasing characters
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // decreasing characters
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}