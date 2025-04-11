#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Print the table from 1 to 10
    printf("\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
