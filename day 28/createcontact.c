#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact contact[MAX];
int count = 0;

// Add Contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    count++;
    printf("Contact added successfully!\n");
}

// Display Contacts
void displayContacts() {
    if (count == 0) {
        printf("\nNo contacts found!\n");
        return;
    }

    printf("\n----- Contact List -----\n");
    for (int i = 0; i < count; i++) {
        printf("\nName  : %s", contact[i].name);
        printf("\nPhone : %s\n", contact[i].phone);
    }
}

// Search Contact
void searchContact() {
    char name[50];
    int found = 0;

    printf("\nEnter Name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].name, name) == 0) {
            printf("\nContact Found\n");
            printf("Name  : %s\n", contact[i].name);
            printf("Phone : %s\n", contact[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}