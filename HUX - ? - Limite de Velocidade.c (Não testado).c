#include <stdio.h>

int CalculoMulta(int A){
  float z;
  
  if(A>50 && A<=55){
    z=230.00;
    }
  else if(A>55 && A<=60){
    z=340.00;
    }
  else if(A>60){
    z=(A-50)*19.28;
    }
    
  printf("%.2f", z);
  
return 0;}

int main(){
  int A;
  
  scanf("%i", &A);
  
  CalculoMulta(A);
  
return 0;}
