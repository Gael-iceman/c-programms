#include<stdio.h>

int swap(int *num1,int *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

int main(){
int num1=55;
int num2=35;
printf("%d and %d",num1,num2);
swap(&num1,&num2);
printf("\nAfter swap %d and %d",num1,num2);
return 0;
}
