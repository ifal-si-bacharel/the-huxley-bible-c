#include <stdio.h>

int main( ){
  int x, y, cont;
  
  scanf("%d %d", &x, &y);

  if(x < y){
    cont = x;
    
    while (cont <= y){
      if (cont % 2 != 0){
        printf("%d\n", cont);}
        cont++;
        }
    }

  else{
    cont = y;
    
    while (cont <= x){
      if (cont % 2 != 0){
        printf("%d\n", cont);
        }
      
      cont++;
      }
    }

return 0;}
