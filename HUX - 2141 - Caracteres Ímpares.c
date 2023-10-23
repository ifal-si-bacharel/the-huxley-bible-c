#include <stdio.h>

int main() {
    char palavra7[8];
    char palavra4[5];

    scanf("%s", palavra7);

    if (strlen(palavra7) == 7) {
        palavra4[0] = palavra7[0];
        palavra4[1] = palavra7[2];
        palavra4[2] = palavra7[4];
        palavra4[3] = palavra7[6];
        palavra4[4] = '\0';

        printf("%s\n", palavra4);
    } else {
        printf("A entrada deve conter exatamente 7 caracteres.\n");
    }

    return 0;
}

