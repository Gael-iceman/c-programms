#include<stdio.h>
int main(){
	float real;
	float imag;
}-COMPLEX;
void swap(_COMPLEX a,_COMPLEX b)
{
	_COMPLEX tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void print(_COMPLEX a)
{
	printf("(%f, %f)\n",a.real,a.imag);
}
main()
{
	_COMPLEX x={4.0,5.0}, y={10.0,15.0};
	
	printf(x);printf(y);
	swap(x,y);
	printf(x);printf(y);
}
