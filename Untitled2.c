#include<stdio.h>
int main(){
	char lastname[11];
	char firstname[11];
	
	printf("enter you name(last,first):");
	scanf("%10s%*[^,],%10s",lastname,firstname);
	printf("nice to meet you %s %s\n",firstname,lastname);
	return 0;
}
