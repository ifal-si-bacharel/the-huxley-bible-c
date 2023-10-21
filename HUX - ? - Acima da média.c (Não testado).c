#include <stdio.h>

float main(){
  double N1, N2, N3, M;
  int cont=0;
    
  scanf("%lf %lf%lf", &N1, &N2, &N3);
  
  M = (N1+N2+N3)/3;
  
  if(N1>M){
    cont = cont + 1;
    }
  if(N2>M){
    cont = cont + 1;
    }
  if(N3>M){
    cont = cont + 1;
    }
  
  printf("%d", cont);

return 0;}
