#include <stdio.h>

int main(){
    int X, Y;
    float T;

  scanf("%i %i", &X, &Y);
  
  if(X==1){
    T=5.3*Y;
    if (T>=40){
      printf("R$ %.2f", T*0.85);}
    else if (Y>=15){
      printf("R$ %.2f", T*0.85);}
    else{
      printf("R$ %.2f", T);}}
      
  if(X==2){
    T=6.0*Y;
    if (T>=40){
      printf("R$ %.2f", T*0.85);}
    else if (Y>=15){
      printf("R$ %.2f", T*0.85);}
    else{
      printf("R$ %.2f", T);}}
      
  if(X==3){
    T=3.2*Y;
    if (T>=40){
      printf("R$ %.2f", T*0.85);}
    else if (Y>=15){
      printf("R$ %.2f", T*0.85);}
    else{
        printf("R$ %.2f", T);}}
        
  if(X==4){
    T=2.5*Y;
    if (T>=40){
      printf("R$ %.2f", T*0.85);}
    else if (Y>=15){
      printf("R$ %.2f", T*0.85);}
    else{
      printf("R$ %.2f", T);}}
      
  return 0;}
