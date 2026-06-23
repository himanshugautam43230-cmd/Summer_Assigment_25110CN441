#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != '\n')
            count[(int)str[i]]++;
    }

    int max = 0;
    char maxChar;


    for (int i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            maxChar = (char)i;
        }
    }

    if (max > 0)
        printf("Maximum occurring character: %c\n", maxChar);
    else
        printf("No valid character found.\n");

    return 0;
}