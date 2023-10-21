#include <stdio.h>
#include <string.h>

int main(){
  char a[50];
  char b[50];

  gets(a);
  gets(b);

  if(strcmp(a, b) == 0){
    puts("IGUAIS");
    }
  else{
    puts("DIFERENTES");
    }
  
return 0;}
