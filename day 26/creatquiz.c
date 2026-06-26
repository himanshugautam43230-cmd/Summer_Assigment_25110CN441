#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("=== Simple Quiz Application ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 5
    printf("\n5. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\n=== Quiz Completed ===\n");
    printf("Your Score: %d/5\n", score);

    return 0;
}