#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    
    for (int i = 0; i < len; i++) {
        if (str[i] == '\n') continue;

        count[(int)str[i]]++;

        if (count[(int)str[i]] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}