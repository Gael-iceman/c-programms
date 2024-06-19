#include<stdio.h>
int main(){
	int n[12];
	int max=0;
	int i;
	printf("enter n:");
	scanf("%d",&n);
	max=n[0];
	for(i=1;i<=n;i++){
		if(n[i]>max){
			max=n[i];
		}
		printf("%d",max);
	}
	return 0;
}
