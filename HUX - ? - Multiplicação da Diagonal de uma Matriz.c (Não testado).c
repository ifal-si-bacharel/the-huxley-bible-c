#include <stdio.h>

int main(){
  int a[4][4], i, j, k;

  while(k!=0){
    scanf("%d", &k);
    if(k==0){
      break;
      }

    for(j=0;j<4;j++){
      for(i=0;i<4;i++){
        scanf("%d", &a[i][j]);
        }
      }

    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
        if(i==j){
          a[i][j]*=k;
          }
        printf("%d ", a[i][j]);
        }
      printf("\n");
      }
    }
    
return 0;}
