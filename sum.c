#include <stdio.h>

int main() {
    int i, sum = 0;

    // Print the first 10 natural numbers
    printf("The first 10 natural numbers are: \n");
    for (i = 1; i <= 10; ++i) {
        printf("%d ", i);
        sum += i; // Add each number to the sum
    }

    // Print the sum
    printf("\nSum of the first 10 natural numbers: %d\n", sum);

    return 0;
}

