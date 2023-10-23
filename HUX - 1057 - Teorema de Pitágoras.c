#include <stdio.h>
#include <math.h>

int main() {
    float c1, c2, hip;

   
    scanf("%f", &c1);

   
    scanf("%f", &c2);

    hip = sqrt(c1 * c1 + c2 * c2);

    printf("%.2f\n", hip);

    return 0;
}

