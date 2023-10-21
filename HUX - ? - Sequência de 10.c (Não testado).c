#include <stdio.h>

int main(){
  int i=0, cont=1, x[10];

  for(i=0; i<10; i++){
    scanf("%i", &x[i]);
    }

  for(i=0; i<9; i++){
    if(x[9]==x[i]){
      cont++;
      }
    }

  printf("O numero %i apareceu %i vezes", x[9], cont);
return 0;}
