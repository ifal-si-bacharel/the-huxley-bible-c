#include <stdio.h>

int SomaDigitos(){
  int a, b, somaresto;
  somaresto=0;
  
  scanf("%d", &a);
  
  while(a>0){
    b = a%10;
    somaresto = b + somaresto;
    a = a/10;
    }
    
  printf ("%d", somaresto);
  }

int main(){
  int somaresto;
  
  SomaDigitos(somaresto);

return 0;}
