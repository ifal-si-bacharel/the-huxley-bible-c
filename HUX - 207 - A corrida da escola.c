#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int competidores[N];
    
    for (int i = 0; i < N; i++) {
        int tempoTotal = 0;
        
        for (int j = 0; j < M; j++) {
            int tempoVolta;
            scanf("%d", &tempoVolta);
            tempoTotal += tempoVolta;
        }
        
        competidores[i] = tempoTotal;
    }
    
    
    int vencedor = 0;
    for (int i = 1; i < N; i++) {
        if (competidores[i] < competidores[vencedor]) {
            vencedor = i;
        }
    }
    
