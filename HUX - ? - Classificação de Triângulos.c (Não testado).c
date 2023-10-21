#include <stdio.h>

int main(){
    int N1, N2, N3;

  scanf("%i %i %i", &N1, &N2, &N3);
  
  if(N1==N2 && N1==N3){
    printf("equilatero");}
  else
    if(N1!=N2 && N1!=N3 && N2!=N3){
    printf("escaleno");}
  else{
    printf("isosceles");}

  return 0;}
