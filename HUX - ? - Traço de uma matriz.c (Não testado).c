#include <stdio.h>

int main(){
  int N,i,j;
  
  scanf("%i",&N);
  
  double mat[N][N],sumd=0;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      scanf("%lf", &mat[i][j]);
      }
    }
      
  for(i=0; i<N; i++){
    sumd = sumd+mat[i][i];
    }
    
  printf("tr(A) = ");
  for(i=0; i<N; i++){
    if (i != N-1){
      printf("(%.2lf) + ",mat[i][i]);
      }
    else{
      printf("(%.2lf) = ",mat[i][i]);
      }
    }

  printf("%.2lf", sumd);
  
return 0;}
