#include <stdio.h>

int main(){
  int X, Y;
  
  scanf ("%i %i", &X, &Y);
  
  if (X>0 && Y>0){
    printf( "primeiro");
    }
  else if (X<0 && Y>0){
    printf ("segundo");
    }
  else if (X<0 && Y<0){
    printf ("terceiro");
    }
  else if (X>0 && Y<0){
    printf("quarto");
    }
  else if (Y==0 && X!=0){
    printf("eixo x");
    }
  else if (X==0 && Y!=00){
    printf("eixo y");
    }
  else{
    printf( "origem");
    }
    
return 0;}
