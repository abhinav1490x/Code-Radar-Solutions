#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){for(j=1;j<=n;j++){printf(" ");}
    for(int j=i;j<=(2*i-1);j++){printf("*");}
    printf("\n");}
}