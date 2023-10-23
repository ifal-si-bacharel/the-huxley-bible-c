#include <stdio.h>

int main() {
    float m3Agua, custoPorLitro, valorAgua, valorEsgoto, valorTotal;

    scanf("%f %f", &m3Agua, &custoPorLitro);

    
    valorAgua = m3Agua * 1000 * custoPorLitro;

   
    valorEsgoto = 0.8 * valorAgua;

    
    valorTotal = valorAgua + valorEsgoto;

    
    printf("%.2f\n", valorAgua);
    printf("%.2f\n", valorEsgoto);
    printf("%.2f\n", valorTotal);

    return 0;
}

