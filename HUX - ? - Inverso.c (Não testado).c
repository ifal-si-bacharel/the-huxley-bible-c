#include <stdio.h>

int main(){
    int vetor[10000], i, n;

    scanf("%d", &n);
    
    for(; i<=n; i++){
        scanf("%d", &vetor[i]);
        }    
    for(i=n-1;i>-1;i--){
        printf("%d ", vetor[i]);
        }
    printf("\n");

return 0;}
