#include <stdio.h>
int main() {
	
    int i,p; 
    printf("Enter the position you want: \n");
    scanf("%d", &p);
    int array[p];
    printf("The fibonacci sequence is: \n");
for(i=0; i<p; i++){
	if(i == 0 || i==1){
		array[i]=1;
	}
	else{
		array[i]= array[i-1]+array[i-2];
	}
	printf("%d ," ,array[i]);
	
}
return 0;
}
