#include <stdio.h>

int main(){
  int A, B, C, D, E, F, T;
  
  scanf ("%i %i %i %i %i %i", &A, &B, &C, &D, &E, &F);
  
  T = A+B+C+D+E+F;
  
  if (T>100){
    printf("Classificado");}
  else {
    printf("Eliminado");}
    
return 0;}
