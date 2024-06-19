//#include<stdio.h>
//
//int main(){
//
//char my_string[10];
//	scanf("%s", &my_string);
//	printf("%s",my_string);
//}
#include <stdio.h>
#include<string.h>
void displayString(char str[]);
int main(){
char str[50];
printf("Enter string: ");
fgets(str, sizeof str, stdin);
displayString(str);// Passing string to function return 0;
}
void displayString(char str[])
{
printf("The passed String was: ");
puts(str);
}
