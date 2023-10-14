#include <stdio.h>

int main() {
    // Define an array to store roll numbers and names of 10 students
    int rollNumbers[10];
    char names[10][50];

    // Input roll numbers and names for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &rollNumbers[i]);

        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Print the roll numbers and names
    printf("\nRoll Numbers and Names of 10 Students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Roll Number: %d, Name: %s\n", rollNumbers[i], names[i]);
    }

    return 0;
}


