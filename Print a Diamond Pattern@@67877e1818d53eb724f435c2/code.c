#include<stdio.h>
int main(){
    int n;
    int stars;
    int spaces;
    scanf("%d",&n);
    stars=1;
    spaces=n-1;
    for(int i=1;i<n*2;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<stars*2;j++){
            printf("*");
        }
        printf("\n");
        if(i<n){
            spaces--;
            stars++;

        }else{
            spaces++;
            stars--;
        }
    }
}