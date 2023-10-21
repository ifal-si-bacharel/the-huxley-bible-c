#include <stdio.h>

int main(){
  int i=0, x[101];

  for(i=0; i<101; i++){
    scanf("%i", &x[i]);
    }

  for(i=0; i<100; i++){
    if(x[100]==x[i]){
      printf("%i\n", i);
      }
    }

return 0;}
