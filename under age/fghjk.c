#include<stdio.h>
int main(){
	int size;
	int i;
	int j;
	int sum=0;
    int s;
	printf("enter size:");
	scanf("%d",&size);

	int array[size];
	printf("enter digits array:");

	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(j=0;j<size;j++){
		printf("numbers are:%d\n",array[j]);
	}
	int small= array[0];
	int z;
	for(z=1;z<size;z++){
		if(array[z]<small){
			small=array[z];
		}
    }

    printf(" smallest is %d\n",small);
    int biggest=array[0];
    for(int g=0;g<size;g++){
        if(array[g]>biggest){
            biggest=array[g];
        }
    }

    printf("biggest is :%d",biggest);
    for(s=0;s<size;s++){
    	sum+=array[s];

	}
	printf("sum:%d",sum);
//int n;
//int i;
//printf("enter array size:");
//scanf("%d",&n);
//int arr[n];
//printf("enter digits:");
//for(i=0;i<n;i++){
//	scanf("%d",&arr[i]);
//}
//int sum=0;
//for(i=0;i<n;i++){
//	sum+=arr[i];
//}
//printf("%d",sum);
	return 0;

}
