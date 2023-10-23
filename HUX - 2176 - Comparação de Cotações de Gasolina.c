#include <stdio.h>

int main() {
    float pGalao, pLitro, cotacao, pGasEua;

   
    scanf("%f %f %f", &pGalao, &pLitro, &cotacao);

   
    pGasEua = pGalao / 3.80 * cotacao;

    
    printf("Gasolina EUA: R$ %.2f\n", pGasEua);
    printf("Gasolina Brasil: R$ %.2f\n", pLitro);

    
    if (pGasEua < pLitro) {
        printf("Mais barata nos EUA\n");
    } else if (pGasEua > pLitro) {
        printf("Mais barata no Brasil\n");
    } else {
        printf("Igual\n");
    }

    return 0;
}
