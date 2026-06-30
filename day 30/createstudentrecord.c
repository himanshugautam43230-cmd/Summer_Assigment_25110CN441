#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student record added successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No student records found.\n");
                } else {
                    printf("\nRoll\tName\tMarks\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               s[i].roll,
                               s[i].name,
                               s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Found:\n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        break;
                    }
                }

                if (i == n)
                    printf("Student not found.\n");
                break;

            case 4:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);
                        printf("Marks updated successfully.\n");
                        break;
                    }
                }

                if (i == n)
                    printf("Student not found.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}