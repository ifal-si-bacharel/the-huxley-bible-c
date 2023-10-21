#include <stdio.h>

int main(){
  int a,b,c;
  
  scanf("%i %i", &a, &b);
  
  for(c=a ; c<= b; c++){
    if(c%5==0){
      if(c!=a&&c!=a+1&&c!=a+2&&c!=a+3&&c!=a+4){
        printf("|");
        }
      printf("%d",c);
      }
    }
    
return 0;}
