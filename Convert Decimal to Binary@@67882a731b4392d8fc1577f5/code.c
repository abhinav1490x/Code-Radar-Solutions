#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // If the number is 0, print "0" directly
    if (a == 0) {
        printf("0\n");
        return 0;
    }

    int result[32]; 
    int count = 0;


    while (a > 0) {
        result[count] = a % 2;  
        a = a / 2;             
        count++;
    }

    
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
