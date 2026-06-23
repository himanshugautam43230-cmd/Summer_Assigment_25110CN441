#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    
    if (len1 != len2) {
        printf("Not Anagrams\n");
        return 0;
    }


    for (int i = 0; i < len1; i++) {
        count[(int)str1[i]]++;
    }

    
    for (int i = 0; i < len2; i++) {
        count[(int)str2[i]]--;
    }

    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");
    return 0;
}