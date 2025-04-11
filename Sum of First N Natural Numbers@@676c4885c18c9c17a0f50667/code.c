#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Output the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
