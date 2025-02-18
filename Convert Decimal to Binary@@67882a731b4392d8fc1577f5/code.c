#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("0");
    }
    int result=0,count=0;
    while (num>0){
        result = result*10+(num%2);
        num = num/2;
        count++; 
    }
    while(count>0){
        printf("%d",result%10);
        result = result/10;
        count--;
    }
    printf("\n");
    return 0;
}