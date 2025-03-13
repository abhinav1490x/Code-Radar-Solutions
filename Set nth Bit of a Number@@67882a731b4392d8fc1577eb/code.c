#include <stdio.h>

int setNthBit(int number, int n) {

    return number | (1 << n);
}

int main() {
    int number, n;
    
    
   
    scanf("%d", &number);
    scanf("%d", &n);

    int result = setNthBit(number, n);

    printf("Original number: %d (binary: %x)\n", number, number);
    printf("Number after setting the %d-th bit: %d (binary: %x)\n", n, result, result);

    return 0;
}
