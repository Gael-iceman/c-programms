//#include<stdio.h>
//void increment(int *var){
//	*var+=1;
//}
//int main(){
//	int x=30;
//	increment(&x);
//	printf("%d",x);
//	return 0;
//
//}
#include<stdio.h>
void sort(int *ptr1,int *ptr2){
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
int main(){
	int x=12;
	int y=23;
	sort(&x,&y);
	printf("x=%d y=%d",x,y);
	return 0;

}
