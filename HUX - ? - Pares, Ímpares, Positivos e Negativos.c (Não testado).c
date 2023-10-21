#include <stdio.h>

int main(){
  long int A;
  
  scanf ("%ld", &A);
  
  if (A>0 && A%2==0){
       printf( "POSITIVO PAR");
    }
  else if (A<0 && A%2 == 0){
       printf ("NEGATIVO PAR");
    }
  else if (A>0 && A%2 != 0){
       printf ("POSITIVO IMPAR");
    }
  else if (A<0 && A%2 != 0){
       printf("NEGATIVO IMPAR");
    }
  else{
       printf("NULO");
    }
    
return 0;}
