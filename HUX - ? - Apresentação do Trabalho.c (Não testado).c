#include <stdio.h>

float main(){
  int A, B, C, D, E;
  int cont = 0;

  scanf("%i %i %i %i %i", &A, &B, &C, &D, &E);
  
  if(A==1 || B==1){
    cont = cont + 1;}
  if(C==1 && D==1){
    cont = cont + 1;}
  if(E==1){
    cont = cont + 1;}
  if(cont==3){
    printf("AVALIADO\n");}
  else{
    printf("0\n");}
    
  return 0;}
