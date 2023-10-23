#include <stdio.h>

int main() {
    int X, Y;
    int contador = 0;

    // Ler X e Y
    scanf("%d %d", &X, &Y);

    // Ler a sequ�ncia de X n�meros
    for (int i = 0; i < X; i++) {
        int numero;
        scanf("%d", &numero);

        if (numero == Y) {
            contador++;
        }
    }

    // Imprimir a contagem
    printf("%d\n", contador);

    return 0;
}


