#include<stdio.h>

int factorial(int n){
if(n==1||n==0){
    return 1;
}else{
    return n*factorial(n-1);
}
}
int main(){
    int num12;
    printf("Enter a number: ");
    scanf("%d",&num12);
    int y=factorial(num12);
    printf("your number is %d and its factorial is %d",num12,y);
return 0;
}