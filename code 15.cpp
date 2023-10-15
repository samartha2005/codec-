#include <stdio.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[100];
    char subject[100];
    int bookID;
};

int main() {
    // Declare and initialize two instances of the Book structure
    struct Book book1 = {
        "The Catcher in the Rye",
        "J.D. Salinger",
        "Fiction",
        101
    };

    struct Book book2 = {
        "To Kill a Mockingbird",
        "Harper Lee",
        "Fiction",
        102
    };

    // Print the details of the first book
    printf("Book 1:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Subject: %s\n", book1.subject);
    printf("Book ID: %d\n\n", book1.bookID);

    // Print the details of the second book
    printf("Book 2:\n");
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Subject: %s\n", book2.subject);
    printf("Book ID: %d\n", book2.bookID);

    return 0;
}

