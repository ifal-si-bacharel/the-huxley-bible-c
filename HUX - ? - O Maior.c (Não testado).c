#include <stdio.h>

int main() {
  int a, b, c, R;
  
  scanf("%d %d %d", &a, &b, &c);
  R = a;
  
  while(b>R){
    R = R+1;
    }
  while(c>R){
    R = R+1;
    }
    
  printf("%d eh o maior",R);
  
return 0;}
