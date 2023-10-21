#include <stdio.h>

int main(){
  int X, cont;

  printf("Digite um numero inteiro:");
  scanf("%i", &X);
  
  for(cont=1; X>1; X=X-1){
   cont=cont*X;
   }
   
  printf("\nFatorial: %i", cont);
  
 return 0;}
