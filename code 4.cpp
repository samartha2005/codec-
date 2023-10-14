#include<stdio.h>
#include<math.h> // Include the math library for sqrt() function
#include<stdlib.h> // Include the stdlib library for abs() function

// Function to calculate the square root of a number
double calculateSquareRoot(double num) {
    if (num < 0) {
        return -1.0; // Return -1 for negative numbers (you can handle error differently if needed)
    }
    return sqrt(num);
}

// Function to calculate the absolute value of a number
double calculateAbsoluteValue(double num) {
    return fabs(num);
}

int main() {
    double number;

    // Input a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root using the function
    double squareRoot = calculateSquareRoot(number);

    if (squareRoot == -1.0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    }

    // Calculate the absolute value using the function
    double absoluteValue = calculateAbsoluteValue(number);
    printf("Absolute value of %.2lf is %.2lf\n", number, absoluteValue);

    return 0;
}

