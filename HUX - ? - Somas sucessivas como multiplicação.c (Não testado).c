#include <stdio.h>

int somas(int a, int b){
	if(b == 0){
    return 0;
    }
	else if(b == 1){
    return a;
    }	
	else if(b < 0){
    return - somas(a,- b);
    }
	else{
    return a + somas(a, b-1);
    }
}

int main(){
  int a,b;
    
  scanf("%d%d",&a,&b);
  printf( "%d",somas(a,b));

return 0;}
