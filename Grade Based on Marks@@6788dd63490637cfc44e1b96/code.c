#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90 && a<=100){
        printf("A");
    }
    else if(a>=85 && a>90){
        printf("B");
    }
    else if(a>=70 && a<85){
        printf("C");
    }
    else if(a>=65 && a<70){
        printf("D")
    }

}