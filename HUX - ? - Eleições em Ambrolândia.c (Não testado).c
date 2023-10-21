#include <stdio.h>

int main(){
  int voto;
  double c83, c93, nulo, branco;

  while(voto != -1){
    scanf("%d", &voto);

    switch(voto){
        case 83:
          c83 ++;
          break;
        case 93:
          c93 ++;
          break;
        case 0:
          branco ++;
          break;
        case -1:
          break;
        default:
          nulo++;
        }
    }

    printf("%.0lf\n%.0lf\n%.0lf\n%.0lf\n", c83, c93, branco, nulo);

    if(c83 > c93){
      printf("83\n");
      }
    else if(c93 > c83){
      printf("93\n");
      }

    printf("%.2lf\n", (c83/(c83 + c93 + branco)) * 100);
    printf("%.2lf\n", (c93/(c83 + c93 + branco)) * 100);

  return 0;}
