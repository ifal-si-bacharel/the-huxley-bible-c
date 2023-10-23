#include <stdio.h>

int main() {
    int n1, n2, n3, p1, p2, p3;
    float mediaA, mediaH, mediaP;

   
    scanf("%d", &n1);
    
    scanf("%d", &n2);
    
    scanf("%d", &n3);
   
    scanf("%d", &p1);
    
    scanf("%d", &p2);
   
    scanf("%d", &p3);

    mediaA = (float)(n1 + n2 + n3) / 3;
    mediaH = 3 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
    mediaP = (float)(n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("a: %.1f\n", mediaA);
    printf("p: %.1f\n", mediaP);
    printf("h: %.1f\n", mediaH);

    return 0;
}
