#include <stdio.h>

int main() {
    int integerVar = 42;
    float floatVar = 3.14;
    double doubleVar = 123.456;
    char charVar = 'A';

    // Declare pointers for each data type
    int *intPtr = &integerVar;
    float *floatPtr = &floatVar;
    double *doublePtr = &doubleVar;
    char *charPtr = &charVar;

    // Display values and addresses using pointers
    printf("Value of integerVar: %d, Address: %p\n", *intPtr, (void *)intPtr);
    printf("Value of floatVar: %f, Address: %p\n", *floatPtr, (void *)floatPtr);
    printf("Value of doubleVar: %lf, Address: %p\n", *doublePtr, (void *)doublePtr);
    printf("Value of charVar: %c, Address: %p\n", *charPtr, (void *)charPtr);

    return 0;
}

