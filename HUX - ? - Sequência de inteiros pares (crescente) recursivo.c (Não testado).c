#include <stdio.h>

int c(int x){
    if (x < 0){
      return 0;
      }
    else{
      c (x-1);
      }
    if(x % 2 == 0){
      printf("%d\n", x);
      }
    }

int main(){
  int x;
    
  scanf("%d", &x);
  c(x);
  
return 0;}
