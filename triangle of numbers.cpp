#include<stdio.h>
int main(){
	int r,c,h;
	int myArray[10][10];
	printf("enter height:");
	scanf("%d",&h);
	for(r=0;r<h;r++){
		for(c=0;c<h;c++){
			if(r>=c){
				if(c==0||c==r){
					myArray[r][c]=1;
				}
				else
				myArray[r][c]=myArray[r-1][c-1]+myArray[r-1][c];
				printf("%d",myArray[r][c]);
			}
		}
		printf("\n");
	}
	return 0;
}
