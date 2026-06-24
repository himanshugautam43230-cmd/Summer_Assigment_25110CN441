#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[50], longest[50];

    int i = 0, j = 0, maxLen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (i = 0; i <= len; i++)
    {
        
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0'; 

            if (j > maxLen)
            {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0; 
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}