#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], result[200];
    int i, j, k = 0;
    int found;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        found = 0;

        
        for (j = 0; j < k; j++)
        {
            if (str[i] == result[j])
            {
                found = 1;
                break;
            }
        }

        
        if (!found)
        {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}