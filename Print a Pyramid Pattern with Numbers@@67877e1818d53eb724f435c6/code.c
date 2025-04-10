#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print spaces before the numbers to align the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print the numbers with spaces between them
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf(" ");  // Space between numbers
            }
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
