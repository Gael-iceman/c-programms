#include<stdio.h>
int main(){
	int x=45;
	int y=56;
	int *ptr;//ptr is pointer and * is a reference
	ptr=&y;//pointer points at y so it stores address of y
	printf(" in base 16 %p\n",ptr);//0x....
	printf(" in base 10 %d\n",ptr);//2345
	printf(" in base 10 %u\n",&ptr);//2345
	printf("value of y %d\n",*ptr);//56
	//y=12;//here we change y but it will only affect this lowerpart from its re-declaration
	*ptr=15;
	printf("value of y %d\n",y);//15
	printf("value of y %d\n",*ptr);//15
	return 0;
}
