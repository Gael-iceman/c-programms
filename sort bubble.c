#include<stdio.h>

void sort(int array[],int size){
    
    for(int i=0;i<size -1;i++){
        for(int j=0;j<size -1;j++){
        if(array[j]<array[j+1]){
             int temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
        }
    }
    }
}

void sortdisplay(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}


int main(){

    int array[]={9,5,0,1,7,4,8,3,74,85,6,31};

    int size=sizeof(array)/sizeof(array[0]);

    sort(array,size);

     sortdisplay(array,size);

     return 0;
}