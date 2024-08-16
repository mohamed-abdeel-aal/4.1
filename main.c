#include <stdio.h>
#include <string.h>


struct Contact {
    char name[50];
    char phone[15];
    char emil[50];
};


void addContact(struct Contact contacts[], int *size) {
    printf("Enter Name: ");
    scanf("%s", contacts[*size].name);
    printf("Enter Phone Number: ");
    scanf("%s", contacts[*size].phone);
    printf("Enter Email: ");
    scanf("%s", contacts[*size].emil);
    (*size)++;
    printf("Contact added successfully\n");
     printf("*/*/*/*/*//*/*/*/*/*/*/**/*/*/\n");
}


void searchContact(struct Contact contacts[], int size) {
    char searchName[50];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < size; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].emil);
            return;
        }
    }
    printf("Contact not found\n");
     printf("*/*/*/*/*//*/*/*/*/*/*/**/*/*/\n");
}


void displayContacts(struct Contact contacts[], int size) {
    if (size == 0) {
        printf("No contacts to display\n");
    } else {
        printf("Contacts:\n");
        for (int i = 0; i < size; i++) {
            printf("Contact %d:\n", i + 1);
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].emil);
            printf("*/*/*/*/*//*/*/*/*/*/*/**/*/*/\n");
        }
    }
}

int main() {
    struct Contact contacts[100];
    int size = 0;
    int choice;

    while (1) {
        printf("\nPhonebook Menu:\n");
        printf("1 Add Contact\n");
        printf("2 Search Contact\n");
        printf("3 Display All Contacts\n");
        printf("4 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &size);
                break;
            case 2:
                searchContact(contacts, size);
                break;
            case 3:
                displayContacts(contacts, size);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again\n");
        }
    }

    return 0;
}
