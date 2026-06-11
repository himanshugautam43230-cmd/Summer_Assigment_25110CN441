#include <stdio.h>

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = findMax(num1, num2);

    printf("Maximum = %d\n", result);

    return 0;
}