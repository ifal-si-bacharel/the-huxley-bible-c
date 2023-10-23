#include <stdio.h>

int main() {
    float massa, altura, imc;

   
    scanf("%f", &massa);

   
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("%.2f\n", imc);

    return 0;
}

