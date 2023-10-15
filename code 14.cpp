#include <stdio.h>

// Function to perform addition using pointers
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Function to perform subtraction using pointers
void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

int main() {
    int num1, num2, sum, difference;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform addition using pointers
    add(&num1, &num2, &sum);
    printf("Sum: %d + %d = %d\n", num1, num2, sum);

    // Perform subtraction using pointers
    subtract(&num1, &num2, &difference);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);

    return 0;
}

