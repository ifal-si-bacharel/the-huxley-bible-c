#include <stdio.h>

int main ( ){
  int n, mod;

  scanf("%i", &n);
  
  if (n>9 || n<-9){
    mod = n % 10;
    printf("%i", mod);}
  else{
    printf("%i", n);}

  return 0;}
