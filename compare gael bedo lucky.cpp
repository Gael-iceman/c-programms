#include<stdio.h>
#include<string.h>
int main(){
	char n[30];
	printf("enter the name:");
	scanf("%s",n);
	if(strcmp(n,"bedo")==0){
	printf("Bedo is a student in rca, he studies in year 1D and he is so fat, he likes to play KAKAROTI and he flirt with patience and he thinks that she is her beloved one although he doesn't know that patience is also flirting with lucky.'");
}   else if(strcmp(n,"gael")==0){
	printf("Gael is also a student in RCA, He is tall, handsome and he is populary known as ICE MAN because he wears expensive and shiny things. Despite his good looking he is also intelligent, this acts as a tourist attraction to people who doesn't know him. ");
}
else if(strcmp(n, "lucky")==0){
	printf("lucky is a small guy who is always playing NBA video game and always going to see jesus, he has never ate less than 3 ringis since he reached RCA, this tells us how much he eats.");
}
else if(strcmp(n, "christian")==0){
	printf("Newton is a hilarious guy who is always searching uselesss things on the internet, he is commonly known as rafiki because of his useless ideas, his dream is to capture the person who killed his role model michael jackson ");
}
else{
	printf("fuck\nyou");
}

	return 0;
	
}
