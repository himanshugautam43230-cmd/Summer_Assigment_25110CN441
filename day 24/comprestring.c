#include <stdio.h>
#include <string.h>

void compressString(char str[])
{
    int len = strlen(str);
    char result[200];
    int k = 0;

    for (int i = 0; i < len; i++)
    {
        int count = 1;

        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }


        result[k++] = str[i];

        
        k += sprintf(&result[k], "%d", count);
    }

    result[k] = '\0';

    printf("Compressed string: %s\n", result);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    compressString(str);

    return 0;
}