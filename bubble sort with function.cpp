#include<stdio.h>
void sort(int arr[], int size){
	int i;
	int j;
	int temp;
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int i;
	int arr[]={6,1,9,2,8,45,75,25,0,3,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,size);
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}

