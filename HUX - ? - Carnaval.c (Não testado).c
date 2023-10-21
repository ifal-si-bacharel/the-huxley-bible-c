#include <stdio.h>

int main(){
    float X1, X2, X3, X4, X5;
    float XT, XMAIOR, XMENOR;
    
    scanf("%f %f %f %f %f",&X1, &X2, &X3, &X4, &X5);
    
    if(X1<=X2 && X1<=X3 && X1<=X4 && X1<=X5){
      XMENOR=X1;
      }
    else if(X1>=X2 && X1>=X3 && X1>=X4 && X1>=X5){
      XMAIOR=X1;
      }
    if(X5<=X2 && X5<=X3 && X5<=X4 && X5<=X1){
      XMENOR=X5;
      }
    else if(X5>=X2 && X5>=X3 && X5>=X4 && X5>=X1){
      XMAIOR=X5;
      }
    if(X2<=X1 && X2<=X3 && X2<=X4 && X2<=X5){
      XMENOR=X2;
      }
    else if(X2>=X5 && X2>=X3 && X2>=X4 && X2>=X1){
      XMAIOR=X2;
      }
    if(X3<=X2 && X3<=X4 && X3<=X5 && X3<=X1){
      XMENOR=X3;
      }
    else if(X3>=X2 && X3>=X4 && X3>=X5 && X3>=X1){
      XMAIOR=X3;
      }
    if(X4<=X2 && X4<=X3 && X4<=X5 && X4<=X1){
      XMENOR=X4;
      }
    else if(X4>=X2 && X4>=X3 && X4>=X5 && X4>=X1){
      XMAIOR=X4;
      }
      
    XT = X1+X2+X3+X4+X5-XMAIOR-XMENOR;
    
    printf("%.1f", XT);
    
    return 0;}
