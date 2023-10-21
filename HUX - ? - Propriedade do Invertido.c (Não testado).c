#include <stdio.h>

int main(){
  int x, y, cont;

  scanf("%d %d", &x, &y);
  cont = x;
  
  while (cont < y){
    cont++;
    
    if (cont % 10 != 0 && cont % (cont / 10) == 0){
      printf("%d\n", cont);
      }
    }
    
return 0;}
