#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    // Input the name of the source file
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open the source file for reading
    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1; // Exit the program with an error code
    }

    // Input the name of the destination file
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Open the destination file for writing
    destinationFile = fopen(destinationFileName, "w");

    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1; // Exit the program with an error code
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

