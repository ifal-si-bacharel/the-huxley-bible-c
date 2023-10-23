#include <stdio.h>

int main() {
    int pontuacao[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &pontuacao[i]);
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (pontuacao[i] > pontuacao[j]) {
                int temp = pontuacao[i];
                pontuacao[i] = pontuacao[j];
                pontuacao[j] = temp;
            }
        }
    }

    
    printf("%d\n", pontuacao[1]);

    return 0;
}

