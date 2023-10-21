#include <stdio.h>

int main(){
  int n, i, j;

  scanf("%i", &n);
  int v1[n][n], v2[n][n];
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf ("%d", &v1[i][j]);
      }
    }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&v2[i][j]);
      }
    }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ", v1[i][j]+v2[i][j]);
      }
    printf("\n");
    }

return 0;}
