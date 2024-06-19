#include<stdio.h>

int main(){
	char cham[30];
	
	printf("enter a number follwed by a character\n");
	fgets(cham,sizeof(cham),stdin);
	
	printf("your character is %s",cham);
	
	return 0;
}
