#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print spaces before the alphabets to align the pyramid
      
        // Print the alphabets with spaces between them
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf(" ");  // Space between alphabets
            }
            printf("%c", 'A' + j - 1);  // Print the alphabet
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

