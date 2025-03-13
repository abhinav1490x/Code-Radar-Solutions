#include <stdio.h>

int setNthBit(int number, int n) {
 
    return number | (1 << n);
}

int main() {
    int number, n;
    

   
    scanf("%d", &number);
    
    
    scanf("%d", &n);

    int result = setNthBit(number, n);

   

    return 0;
}
