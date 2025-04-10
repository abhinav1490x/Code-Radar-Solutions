#include<stdio.h>
int main(){
    int n;
    
    int nsp=n-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(int j=1;n<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<(2*i+1);k++){
            printf("%d ",i);
        }   
        printf("\n");
    
}
}