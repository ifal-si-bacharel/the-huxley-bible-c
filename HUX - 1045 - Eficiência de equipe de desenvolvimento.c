#include <stdio.h>

int main() {
    int quantL, quantF, tamEq, numB;
    double efic;

    
    scanf("%d", &quantL);

    
    scanf("%d", &quantF);

    
    scanf("%d", &tamEq);

   
    scanf("%d", &numB);

    efic = ((double)quantL / quantF) / tamEq - 4.2 * numB;

    printf("%.1lf\n", efic);

    return 0;
}

