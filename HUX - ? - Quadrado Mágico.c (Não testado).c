#include <stdio.h>

int main() {
    int n, i, j, SDX=0, SDY=0;
    
    scanf("%i", &n);
    int a[n][n];

    for(i=0; i<n; i++){
      for(j=0; j<n; j++)
        scanf("%i", &a[i][j]);
      }

    int SL[n];
    for(i = 0; i < n; i++){
      SL[i] = 0;
      for(j = 0; j < n; j++){
        SL[i] += a[i][j];
        }
      }

    int SC[n];
    for(j = 0; j < n; j++){
      SC[j]=0;
      for (i = 0; i < n; i++)
        SC[j] += a[i][j];
      }

    for(i = 0; i < n; i++)
      SDX += a[i][i];
    for(i = 0; i < n; i++)
      SDY += a[i][n-i-1];

    int X = 1, Y = 1;
    for(i = 1; i <  n; i++){
      if(SL[i] != SL[i-1]){
        X = 0;
        break;
        }
      else if(SC[i] != SC[i-1]){
        Y = 0;
        break;
        }
      }

    if(X && Y && SDX == SDY && SDX == SL[0])
      printf("%i", SL[0]);
    else
      printf("-1");

return 0;}
