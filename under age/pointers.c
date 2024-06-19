#include<stdio.h>
int main(){
	int i=5;
	double d=21.987654;
	char c='v';
	int *ptri=&i;
	double *ptrd=&d;
	char *ptrc=&c;
	printf("the address of int %d is 0x%x\n",i,ptri);
	printf("the address of double %f is 0x%x\n",d,ptrd);
	printf("the address of char %c is 0x%x\n",c,ptrc);
	printf("The address of char* is 0x%x\n",ptrc);
    printf("The address of int* is 0x%x\n", ptri);
    printf("The address of double* is 0x%x\n\n",ptrd);

	printf("the value of int %d is %d\n",i, *ptri);
	printf("the value of double %f is %f\n",d, *ptrd);
	printf("the value of char %c is %c\n",c, *ptrc);
	printf("the value of char* %c is 0x%x\n",*ptrc,ptrc);
	printf("the value of int* %d is 0x%x\n",*ptri,ptri);
	printf("the value of double* %f is 0x%x\n\n",*ptrd,ptrd);

	printf("the size of int %d is %d\n",i, sizeof(i));
	printf("the size of double %f is %d\n",d, sizeof(d));
	printf("the size of char %c is %d\n",c, sizeof(c));
	printf("the size of char* is %d\n",sizeof(ptrc));
	printf("the size of int* is %d\n",sizeof(ptri));
	printf("the size of double* is %d",sizeof(ptrd));
	return 0;
}
