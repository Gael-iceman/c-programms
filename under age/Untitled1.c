#include<stdio.h>
int main(){
	int marks[5];
	int sum=0;
	int av=0;
	int i;
	printf("enter bio:");
	for( i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++){
        sum+=marks[i];
	}
	printf("%d\n",sum);
	av=sum/i+1;
	printf("%d\n",av);
	return 0;

}
