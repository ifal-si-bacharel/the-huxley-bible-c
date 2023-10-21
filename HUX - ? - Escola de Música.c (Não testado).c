#include <stdio.h>

int ClassificaAluno(float m, int f){
  if(f>10){
    printf("REPROVADO POR FALTAS");
    }
  else if(m<7){
    printf("REPROVADO");
    }
  else if(f<=10 && m>=7 && m<9.5){
    printf("APROVADO");
    }
  else if(f<=10 && m>=9.5){
    printf("APROVADO COM LOUVOR");
    }
return 0;}

int main(){
  float m;
  int f;
  
  scanf("%f %i", &m, &f);
  ClassificaAluno(m, f);
  
return 0;}
