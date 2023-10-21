#include <stdio.h>

int k(int x, int y){
	if(y == 0){
    return x;
    }
	else{
    return k (y, x % y);
    }
  }

int main(){
  int x, y;

  scanf("%d", &x);
	scanf("%d", &y);
	
  printf("%d", k (x, y));

return 0;}
