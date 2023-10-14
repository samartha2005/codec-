#include <stdio.h>

// Recursive function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int num;

    // Input a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        // Calculate the factorial using the recursive function
        unsigned long long fact = factorial(num);

        // Print the factorial
        printf("%d! = %llu\n", num, fact);
    }


    return 0;
}

