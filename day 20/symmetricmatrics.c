#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int n, i, j, isSymmetric = 1;

    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);

    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Output result
    if(isSymmetric)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");

    return 0;
}