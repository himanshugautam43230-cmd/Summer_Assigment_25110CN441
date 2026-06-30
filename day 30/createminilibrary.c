#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book book[100];
    int n = 0, choice, id, i;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Title: ");
            scanf("%s", book[n].title);

            printf("Enter Author Name: ");
            scanf("%s", book[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &book[n].quantity);

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\nID\tTitle\tAuthor\tQuantity\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\t%d\n",
                           book[i].id,
                           book[i].title,
                           book[i].author,
                           book[i].quantity);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (book[i].id == id) {
                    printf("\nBook Found\n");
                    printf("ID: %d\n", book[i].id);
                    printf("Title: %s\n", book[i].title);
                    printf("Author: %s\n", book[i].author);
                    printf("Quantity: %d\n", book[i].quantity);
                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (book[i].id == id) {
                    if (book[i].quantity > 0) {
                        book[i].quantity--;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book not available.\n");
                    }
                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (book[i].id == id) {
                    book[i].quantity++;
                    printf("Book returned successfully.\n");
                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}