#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b&&b<a||a>b){
        printf("True");
    }
    else{
        printf("False");
    }
}