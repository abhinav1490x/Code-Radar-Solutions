#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}