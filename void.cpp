#include<stdio.h>
int main(){
	int num1;
	int num2;
	int op;
	int result;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter op:");
	printf("enter num2:");
	switch(op){
		case +:
			result=num1+num2;
			break;
		case -:
			result=num1-num2;
			break;
		case *:
			result=num1*num2;
			break;
	}
	printf("the result is %d",result);
	return 0;
}
