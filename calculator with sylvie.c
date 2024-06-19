#include <stdio.h>
float addition(float num1,float num2){
	return num1+num2;
}
float subtraction(float num1,float num2){
	return num1-num2;
}
float division(float num1,float num2){
	return num1/num2;
}
float multiplication(float num1,float num2){
	return num1*num2;
}
int main() {
//	printf("Hello World");

	float num1;
	float num2;
	int operator;
	//char continuation[3];
	
	printf("=====Gael's Calculator==========\n");
	printf("====enter an operator==========\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	do{
	scanf("%d",&operator);
	printf("Enter the first number");
	scanf("%f",&num1);
		printf("Enter the second number");
	scanf("%f",&num2);
	
	if(operator==1){
		printf("The addition of %f and %f is %f\n",num1,num2,addition(num1,num2));
	}
	else if(operator==2){
		printf("The Subtraction of %f and %f is %f\n",num1,num2,subtraction(num1,num2));
	}
	else if(operator==3){
		printf("The Multiplication of %f and %f is %f\n",num1,num2,multiplication(num1,num2));
	}
	else if(operator==4){
		printf("The Division of %f and %f is %f\n",num1,num2,division(num1,num2));
	}
	else{
		printf("Invalid operation\n");
	}

	
	if(continuation=="no"){
		exit(0);
	}
	printf("Do you want to continue yes/no\n");
	scanf("%s",&continuation);
	}
	while(continuation!="no");

	
	
	
	
	
	
	
	return 0;
}
