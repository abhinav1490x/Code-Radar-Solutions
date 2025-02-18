#include<stdio.h>
int main(){
    int a, b, c;
    // Corrected the format specifiers to %d for reading integers
    scanf("%d %d %d", &a, &b, &c); 
    
    // Check if the numbers satisfy the triangle inequality theorem
    if((a + b > c) && (b + c > a) && (c + a > b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}
