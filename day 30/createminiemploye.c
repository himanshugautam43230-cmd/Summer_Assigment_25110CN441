#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, id, i;

    do {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Department: ");
            scanf("%s", emp[n].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nID\tName\tDepartment\tSalary\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\t\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].department,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("\nEmployee Found\n");
                    printf("ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Department: %s\n", emp[i].department);
                    printf("Salary: %.2f\n", emp[i].salary);
                    break;
                }
            }

            if (i == n)
                printf("Employee not found.\n");
            break;

        case 4:
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);
                    printf("Salary updated successfully.\n");
                    break;
                }
            }

            if (i == n)
                printf("Employee not found.\n");
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