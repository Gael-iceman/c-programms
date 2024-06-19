#include <stdio.h>
void foo1(int xval) 
{
 int x;
 x = xval;
  printf("value of x is %d the address is 0x%x\n\n",x,&x);
}
void foo2(int dummy) 
{
 int y;
 y=dummy;
 
 printf("value of y is %d and its adress is %p",y,&y);
}
int main() 
{
 foo1(7);
 foo2(11);
 return 0;
}
