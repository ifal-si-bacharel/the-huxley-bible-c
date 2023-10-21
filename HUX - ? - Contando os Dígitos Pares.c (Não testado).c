#include <stdio.h>

int p(int x){
  int cont, k=0;

  if (x <=0){
    return 0;
    }
 	else{
    cont = x%10;
    x = x/10;
    k += p(x); 
        
    if(cont%2 == 0){
      k++;
      }
    return k;
    }
  }

int main(){
  int num;
    
  scanf("%d", &num);
  printf("%d", p(num));
    
return 0;}
