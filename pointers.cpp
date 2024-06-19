#include<stdio.h>
int main(){
	int i=5;
	double d=21.987654;
	char c='v';
	int *ptri=&i;
	double *ptrd=&d;
	char *ptrc=&c;
	printf("Address: 0xxxxx\n", (unsigned int)ptri);
	return 0;
}
