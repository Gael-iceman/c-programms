#include<stdio.h>
void bubble(int arr[],int n);
int main(){
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter entegers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
void bubble(int arr[], int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;i++){
			if(arr[j+1]>arr[j]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
