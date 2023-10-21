#include <stdio.h>

int EstacaoAno(int d, int m){
  if ((m==9 && d>=21) || (m==10) || (m==11) || (m==12 && d<=20)){
    printf("PRIMAVERA");
    }
  else if ((m==12 && d>=21) || (m==1) || (m==2) || (m==3 && d<=20)){
    printf("VERAO");
    }
  else if ((m>=3 && d>=21) || (m==4) || (m==5) ||(m<=6 && d<=20)){
    printf("OUTONO");
    }
  else if ((m>=6 && d>=21) || (m==7) || (m==8) || (m<=9 && d<=20)){
    printf("INVERNO");
    }
return 0;}

int main(){
  int d, m;
  
  scanf("%i %i", &d, &m);
  EstacaoAno(d,m);
  
return 0;}
