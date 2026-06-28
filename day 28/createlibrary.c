#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

struct Book book[MAX];
int count = 0;

// Add Book
void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &book[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);

    book[count].issued = 0;
    count++;

    printf("Book added successfully!\n");
}

// Display Books
void displayBooks() {
    if (count == 0) {
        printf("\nNo books available!\n");
        return;
    }

    printf("\n----- Library Books -----\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook ID   : %d", book[i].id);
        printf("\nTitle     : %s", book[i].title);
        printf("\nAuthor    : %s", book[i].author);
        printf("\nStatus    : %s\n",
               book[i].issued ? "Issued" : "Available");
    }
}

// Search Book
void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].id == id) {
            printf("\nBook Found\n");
            printf("Title  : %s\n", book[i].title);
            printf("Author : %s\n", book[i].author);
            printf("Status : %s\n",
                   book[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

// Issue Book
void issueBook() {
    int id, found = 0;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].id == id) {
            if (book[i].issued == 0) {
                book[i].issued = 1;
                printf("Book issued successfully!\n");
            } else {
                printf("Book is already issued!\n");
            }
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}