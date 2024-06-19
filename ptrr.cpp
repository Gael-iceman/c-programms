#include<stdio.h>
int main(){
	int x=10;
	int *ptr=&x;
	int **ptrptr= &ptr;
	printf("0x%x\n",ptr);//address
	printf("%d\n", *ptr);//value
	printf("0x%x\n", &x );//address in hex
	printf("%p\n", &x);//address in hex
	printf("%d\n", ptr);
	printf("0x%x\n", ptrptr);
	printf("is  0x%x\n", *ptrptr);
	return 0;
}
