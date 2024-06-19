#include<stdio.h>
int main(){
	int c,r,h;
	h=6;
	int arr[r][c];
//	printf("enter your height\n");
//	scanf("%d",&h);
	for(r=0;r<h;r++){
		for(c=0;c<h;c++){
			if(r>=c){
				if(c==0||r==c){
				arr[r][c]=0;
			}else{
				arr[r][c]=7;
			}
			printf("%d",arr[r][c]);
		}
		}
		printf("\n");
	}
		for(r=0;r<h;r++){
		for(c=0;c<h;c++){
			if(r<=c){
				if(c==0||r==c){
				arr[r][c]=0;
			}else{
				arr[r][c]=7;
			}
			printf("%d",arr[r][c]);
		}
		}
		printf("\n");
	}
	return 0;
}
