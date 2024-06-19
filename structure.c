#include<stdio.h>
 struct person
 {
        int age;
        char name[30];
        char nation[30];
        int salary;
        char city[30];
    }person1,person2;
int main(){
    printf("enter age:");
    scanf("%d",&person1.age);
    printf("your age is: %d\n",person1.age);

    printf("enter your name: ");
    scanf("%s",person1.name);
    printf("your name is:%s\n",person1.name);

    printf("enter nation:");
    scanf("%s",person1.nation);
    printf("your nation is:%s\n",person1.nation);

    printf("enter salary:",person1.salary);
    scanf("%d",&person1.salary);
    printf("your salary is:%d\n",person1.salary);

    printf("enter city:");
    scanf("%s",person1.city);
    printf("your city is:%s",person1.city);
    
   return 0;
}