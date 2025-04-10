#include <stdio.h>

int main() {
    int n;
    int num = 1;  // Start with the number 1

    // Input the number of rows
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);  // Print the current number
            num++;  // Increment the number for the next print
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
