#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i+1);k++){
            printf("*");
        }   
        printf("\n");
    
}
}