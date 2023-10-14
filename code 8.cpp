#include <stdio.h>
#include <stdlib.h>

// Compare function for ascending order
int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Compare function for descending order
int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1; // Exit the program with an error code
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compareAsc);
    printf("Sorted Array in Ascending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compareDesc);
    printf("Sorted Array in Descending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

