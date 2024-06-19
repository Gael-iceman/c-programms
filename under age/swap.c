#include<stdio.h>
void swap(int i1,int i2){
	int temp=i1;
	i1=i2;
	i2=temp;
}
int main(){
	int x=12;
	int y=23;
	swap(x,y);
	printf("x=%d y=%d",x,y);
	return 0;

}
