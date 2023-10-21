#include <stdio.h>

int main(){
    int i, j, a[3][4];
    float P[4], R[3][1];

    for(i=0; i<3; i++){
      for(j=0; j<4; j++){
        scanf("%i", &a[i][j]);
        }
      }

    int x;
    float calc;

    for(x=0; x<4; x++)
      scanf("%f", &P[x]);
      calc=0, x=0;
    for(i=0; i<3; i++){
      calc=0, x=0;
      for(j=0; j<4; j++){
           calc = calc+(a[i][j]*P[x]);
           x++;
           }
    printf("%.2f\n", calc);
    }

return 0;}
