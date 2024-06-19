#include<stdio.h>
int main(){
	int h;
	int r;
	int c;
	int arr[10][10];
	printf("enter the height:");
	scanf("%d",&h);
	for(r=0;r<h;r++){
		for(c=0;c<h;c++){
			if(r>=c){
				if(c==0||c==r){
					printf("*");
				}
				else{
					printf("c");
				}
			}
		
		}
			printf("\n");	
	}
return 0;
}
