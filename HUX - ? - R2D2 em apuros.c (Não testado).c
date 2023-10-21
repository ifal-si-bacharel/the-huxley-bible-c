#include <stdio.h>

int main(){
  int n, m;
  
  scanf("%i %i", &m,&n);
  
  int a[m][n], i, j, aux;;
  
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      scanf("%i", &a[i][j]);
      }
    }

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      if(j == m-1){
        printf("%i", a[j][i]);
        }
      else{
        printf("%i ", a[j][i]);
        }
      }
    printf("\n");
    }

	return 0;}
