#include <stdio.h>

int main() {
    char nac;
    char ocup;
    int qtd;
    int cal;

    scanf(" %c", &nac);
    scanf(" %c", &ocup);
    scanf("%d", &qtd);
    scanf("%d", &cal);

    if (nac == 'E') {
        if (qtd == 0) {
            printf("Liberado\n");
        } else {
            printf("Barrado\n");
        }
    } else {
        if (ocup == 'M') {
            printf("Liberado\n");
        } else if (ocup == 'T' || ocup == 'O') {
            if (qtd <= 1) {
                if (cal <= 22) {
                    printf("Liberado\n");
                } else {
                    printf("Barrado\n");
                }
            } else {
                printf("Barrado\n");
            }
        } else {
            if (qtd <= 2) {
                if (cal <= 38) {
                    printf("Liberado\n");
                } else {
                    printf("Barrado\n");
                }
            } else {
                printf("Barrado\n");
            }
        }
    }

    return 0;
}
