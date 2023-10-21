#include <stdio.h>
#include <string.h>

int main(){
  int x, i;
  char a[255], b[255];

  fgets(a, 255, stdin);
  x = strlen(a) - 1;

  for(i=x; i>=0; i--){
    printf("%c", a[i]);
    }

return 0;}
