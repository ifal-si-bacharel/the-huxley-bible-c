#include <stdio.h>
#include <string.h>

int main(){
  int t, i, cont=0;
  char a[400], b[100];

  fgets(a, 400, stdin);
  t = strlen(a);
  
  for(i=0; i<t; i++){
    b[cont]=a[i];
    if(b[cont]==' '){
      cont=0;
      }
    else{
      cont++;
      }
    }

    b[cont]='\0';
    printf("%s", b);

return 0;}
