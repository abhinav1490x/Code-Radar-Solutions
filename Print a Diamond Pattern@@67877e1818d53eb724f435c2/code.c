#include<stdio.h>
int main(){
    int n;
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=nsp;j++){ //no. of space
            printf(" ");
        }
        for(int k=1;k<=nst;k++){ //no. of stars
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        
        printf("\n");
    }
}