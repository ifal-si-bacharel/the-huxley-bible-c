#include <stdio.h>

int main(){
  int A, B, C;
  
  scanf ("%i %i %i", &A, &B, &C);
  
  if (A>=B && B>=C){
    printf("%i\n%i\n%i", A, B, C);}
  else if (B>=A && A>=C){
    printf("%i\n%i\n%i", B, A, C);}
  else if (C>=A && A>=B){
    printf("%i\n%i\n%i", C, A, B);}
  else if (A>=C && A>=B){
    printf("%i\n%i\n%i", A, C, B);}
  else if (B>=C && C>=A){
    printf("%i\n%i\n%i", B, C, A);}
  else{
    printf("%i\n%i\n%i", C, B, A);}
    
return 0;}
