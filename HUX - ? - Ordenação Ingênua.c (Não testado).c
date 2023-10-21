#include <stdio.h>

int main(){
    int vetor[10000];
    int i, n, j, temp;
    
    scanf("%d", &n);
    
    for(i=0; i<=n; i++){
      scanf("%d", &vetor[i]);}
        
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++){
        if(vetor[i]>vetor[j]){
          temp=vetor[i];
          vetor[i]=vetor[j];
          vetor[j]=temp;
          }
        }

    for(i=0;i<n;i++){
      printf("[%d]", vetor[i]);
      }
        
    printf("\n");
    
return 0;}
