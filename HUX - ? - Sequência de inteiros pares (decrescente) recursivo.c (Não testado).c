#include <stdio.h>

int d(int x){
   if(x%2 == 0){
     printf("%d\n", x);
     }
   if(x < 0){
     return 0;
     }
   else{
     return d(x - 1);
     }
   }

int main(){
  int x;

  scanf("%d", &x);
  d(x);

return 0;}
