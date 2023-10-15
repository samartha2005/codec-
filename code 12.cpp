#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Calculate and print the length of each string
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("Length of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);

    // Compare the two strings
    int compareResult = strcmp(str1, str2);

    if (compareResult < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else if (compareResult > 0) {
        printf("The first string is lexicographically larger than the second string.\n");
    } else {
        printf("The two strings are lexicographically equal.\n");
    }

    return 0;
}

