#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    // Input the value of N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N must be a positive integer.\n");
        goto end; // Jump to the end label
    }

loop:
    sum += i;
    i++;

    if (i <= N)
        goto loop; // Jump back to the loop label

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

end:
    return 0;
}

