
#include<stdio.h>
int main(){
	int h;
	int b;
	int bb;
	printf("enter the height:");
	scanf("%d",&h);
	printf("enter the small base:");
	scanf("%d",&b);
	printf("enter the big base:");
	scanf("%d",&bb);
	int solution=((b+bb)*(h/2));
	printf("the area of your trapezium is %d\n",solution);
return 0;
}
