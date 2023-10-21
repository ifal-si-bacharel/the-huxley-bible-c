#include <stdio.h>

int main(){
  int M,N,Y;
  
  scanf("%i %i", &M, &N);
  
  if((M<=0) || (N<=0)){
	printf("sem multiplos menores que %i", N);
  	}
  else if(M>N){
	printf("sem multiplos menores que %i", N);
  	}
  else if(N>=M){
	for(Y=1; Y*M<=N; Y++){}
	printf("%i", Y*M-M);
    
  return 0;
  }
 }
