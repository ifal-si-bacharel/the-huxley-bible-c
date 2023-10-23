#include <stdio.h>
#include <string.h>

int contarVogais(char vogais[], char frase[]) {
    int cont = 0;
    int i, j;

    for (i = 0; i < strlen(frase); i++) {
        for (j = 0; j < strlen(vogais); j++) {
            if (frase[i] == vogais[j]) {
                cont++;
                break; 
            }
        }
    }

    return cont;
}

int main() {
    int casos;
    scanf("%d", &casos);

    for (int x = 0; x < casos; x++) {
        char vogais[6];
        char frase[101];

        scanf("%s", vogais);
        scanf(" %[^\n]s", frase);

        int resultado = contarVogais(vogais, frase);
        printf("%d\n", resultado);
    }

    return 0;
}
