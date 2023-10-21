#include <stdio.h>

int main(){
  int a, b, cont;
  
  scanf("%d %d", &a, &b);
  
  if(a > b){
    cont = b ;
    
    while (cont < a){
      if (cont % 5 == 3 || cont % 5 == 2){
        printf("%d\n", cont);
        }
        cont = cont + 1;
      }
    }
	else{
    cont = a;
    
    while(cont < b){
      if(cont % 5 == 3 || cont % 5 == 2){
        printf("%d\n", cont);
        }
      cont = cont + 1;
      }
    }
    
return 0;}
