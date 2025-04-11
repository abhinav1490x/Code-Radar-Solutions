#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input

    scanf("%d", &n);

    // Calculate the sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Output the result
    printf("%d", sum);

    return 0;
}
