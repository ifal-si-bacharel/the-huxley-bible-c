#include <stdio.h>

int MultiPrimo(){
  long int A, B, C, D;
  long int contA, contB, contC, contD;
  
  scanf("%ld%ld%ld%ld", &A,&B,&C,&D);
  
  if (A!=1){
    contA=(A-1);
    while (A%contA!=0&&contA!=0){
      contA=contA-1;
      }
    }
  if (B!=1){
    contB=(B-1);
    while (B%contB!=0&&contB!=0){
      contB=contB-1;
      }
    }
  if (C!=1){
    contC=(C-1);
    while (C%contC!=0&&contC!=0){
      contC=contC-1;
      }
    }
  if (D!=1){
    contD=(D-1);
    while (D%contD!=0&&contD!=0){
      contD=contD-1;
      }
    }
  if (contA==1 && A%contA==0 && contB==1 && B%contB==0 && contC==1 && C%contC==0 && contD==1 && D%contD==0){
    printf ("%d\n", (A*B*C*D));
    }
  else {
    printf("SEM PRODUTO");
    }
return 0;}

int main(){
  MultiPrimo();
return 0;}
