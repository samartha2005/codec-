#include <stdio.h>

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

int main() {
    float side, area;

    // Input the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Check if the input side is non-negative
    if (side >= 0) {
        // Calculate the area using the function
        area = calculateSquareArea(side);

        // Print the area
        printf("The area of the square with side length %.2f is %.2f\n", side, area);
    } else {
        printf("Invalid input. Please enter a non-negative number for the side length.\n");
    }

    return 0;
}

