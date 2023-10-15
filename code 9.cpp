#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int startIndex, endIndex;

    // Input a string
    printf("Enter a character string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Input the starting and ending indices for extraction
    printf("Enter the starting index: ");
    scanf("%d", &startIndex);
    printf("Enter the ending index: ");
    scanf("%d", &endIndex);

    int strLength = strlen(inputString);

    if (startIndex < 0 || startIndex >= strLength || endIndex < startIndex || endIndex >= strLength) {
        printf("Invalid indices. Ensure that 0 <= starting index <= ending index < string length.\n");
        return 1; // Exit the program with an error code
    }

    // Extract and print the portion of the string
    printf("Extracted portion: ");
    for (int i = startIndex; i <= endIndex; i++) {
        putchar(inputString[i]);
    }
    printf("\n");

    return 0;
}

