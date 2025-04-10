#include <stdio.h>

void alternating_numeric_triangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        int row[i];

        // Fill the row with numbers
        for (int j = 0; j < i; j++) {
            row[j] = num++;
        }

        // Print the row: reverse if i is even
        if (i % 2 == 0) {
            for (int j = i - 1; j >= 0; j--) {
                printf("%d ", row[j]);
            }
        } else {
            for (int j = 0; j < i; j++) {
                printf("%d ", row[j]);
            }
        }

        printf("\n");
    }
}

int main() {
    int n = 5;
    alternating_numeric_triangle(n);
    return 0;
}
