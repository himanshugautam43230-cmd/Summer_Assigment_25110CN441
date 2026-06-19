#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //cal diagonal sum
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}