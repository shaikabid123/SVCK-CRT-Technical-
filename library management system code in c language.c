#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Enter book ID: ");
        scanf("%d", &library[bookCount].id);
        printf("Enter book title: ");
        scanf(" %[^\n]", library[bookCount].title);
        printf("Enter book author: ");
        scanf(" %[^\n]", library[bookCount].author);
        bookCount++;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full!\n");
    }
}

void viewBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
    } else {
        for (int i = 0; i < bookCount; i++) {
            printf("Book ID: %d\n", library[i].id);
            printf("Book Title: %s\n", library[i].title);
            printf("Book Author: %s\n", library[i].author);
            printf("----------------------\n");
        }
    }
}

void searchBook() {
    int id;
    printf("Enter book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("Book found!\n");
            printf("Book ID: %d\n", library[i].id);
            printf("Book Title: %s\n", library[i].title);
            printf("Book Author: %s\n", library[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
