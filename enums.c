#include<stdio.h>
struct car{
	char color[10];
	 int number_of_sits;
	 float price;
}Toyota,Benz,Hyundai;
int main(){
printf("toyota color:");
scanf("%s",&Toyota.color);
printf("nbr of sits:");
scanf("%d",&Toyota.number_of_sits);
printf("price of toyota:");
scanf("%f",&Toyota.price);
printf("Benz color:");
scanf("%s",&Benz.color);
printf("nbr of sits:");
scanf("%d",&Benz.number_of_sits);
printf("price of Benz:");
scanf("%f",&Benz.price);
printf("Hyundai color:");
scanf("%s",&Hyundai.color);
printf("nbr of sits:");
scanf("%d",&Hyundai.number_of_sits);
printf("price of Hyundai:");
scanf("%f",&Hyundai.price);

printf("\n\tdata for toyota:\n___________\n");
printf("color: %s\n",Toyota.color);
printf("price: %f\n",Toyota.price);
printf("sits: %d\n",Toyota.number_of_sits);

printf("\n\tdata for Benz:\n_______\n");
printf("color: %s\n",Benz.color);
printf("price: %f\n",Benz.price);
printf("sits: %d\n",Benz.number_of_sits);

printf("\n\tdata for Hyundai:\n________");
printf("color: %s\n",Hyundai.color);
printf("price: %f\n",Hyundai.price);
printf("sits: %d\n",Hyundai.number_of_sits);
	return 0;
}
