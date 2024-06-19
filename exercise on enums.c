#include<stdio.h>
	struct employee{
		char name[50];
		int age;
		float marks;
	}cand1,cand2;
int main(){
printf("cand1 name:");
scanf("%s",&cand1.name);
printf("cand1 age:");
scanf("%d",&cand1.age);
printf("cand1 marks:");
scanf("%f",&cand1.marks);

printf("cand2 name:");
scanf("%s",&cand2.name);
printf("cand2 age:");
scanf("%d",&cand2.age);
printf("cand2 marks:");
scanf("%f",&cand2.marks);

printf("\n cand1 details\n");
printf("name:%s\n",cand1.name);
printf("age:%d\n",cand1.age);
printf("marks:%f\n",cand1.marks);

printf("\n cand2 details\n");
printf("name:%s\n",cand2.name);
printf("age:%d\n",cand2.age);
printf("marks:%f\n",cand2.marks);
return 0;
}
