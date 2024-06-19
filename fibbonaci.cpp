#include <stdio.h>
int main() {
    int h;
    int arr[10][20];
  printf("enter size: ");
  scanf("%d",&h);
  for(int i=0;i<h;i++){
      for(int j=0 ;j<h;j++){
          if(i>=j){
            if(i==j||j==0){
                arr[i][j]=1;
            }
            else{
   arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
                 printf("%d", arr[i][j]);
          }
      }
      printf("\n");
  }
    return 0;
}
