#include <stdio.h>

int main(){
  int a[3][3], n=0, i, j;

  do{
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        n=-1;
        scanf("%d",&n);
        
        if (n==-1){
          break;
          }
        a[i][j]=n;
        }
      }

  if(n!=-1){
    if(a[1][0]==0 && a[2][0]==0 && a[2][1]==0){
      printf("Por baixo\n");
      }
    else if(a[0][2]==0 && a[0][2]==0 && a[1][2]==0){
      printf("Por cima\n");
      }
    else{
      printf("Nao pode atravessar\n");
      }
    }
  }while(n!=-1);

return 0;}
