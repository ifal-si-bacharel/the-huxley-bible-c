#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int soma(int n, int inicio, int final){
  if(inicio <= final){
    if(inicio >= 0){
      n += inicio;
      
      return soma (n, inicio + 1, final);
      }
    else{
      return soma(n, inicio + 1, final);
      }
    }
    else{
      return n;
      }
  }

int main(){
	int inicio, final, x = 0;
	int soma_total = 0;
  
	scanf("%d", &inicio);
	scanf("%d", &final);
  
	if(inicio > final){
    x = final;
    final = inicio;
    inicio = x;
    }
    
  printf("%d", soma(soma_total, inicio, final));
  
return 0;}
