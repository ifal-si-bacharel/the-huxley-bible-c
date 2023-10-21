#include <stdio.h>

int main() {
  float KM, D, R;
  
  scanf ("%f", &D);
  scanf ("%f", &KM);
  
  R = KM/D;
  
  if (R<=100/1){
    printf ("%.2f", D*90);}
  if (R>100/1){
    printf ("%.2f" ,(((D*90)+(((R-100)*D)*12))));}
  
return 0;}
