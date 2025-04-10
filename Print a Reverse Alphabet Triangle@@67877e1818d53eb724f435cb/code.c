#include <stdio.h>

int main() {
    int rows = 3;
    for(int i = 0; i < rows; i++) {
        char ch = 'A';
        for(int j = 0; j < rows - i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
