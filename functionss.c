#include<stdio.h>
int function(int a,int b,int c){
	int product=a*b*c;
	return product;	
}
int main(){
	int a;
	int b;
	int c;
	printf("enter nums:");
	scanf("%d %d %d",&a,&b,&c);
//		printf("enter 2nd nums:");
//	scanf("%d",b);
//		printf("enter 3rd nums:");
//	scanf("%d",&c);

	printf("%d",function(a,b,c));
	return 0;
}
