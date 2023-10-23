#include <stdio.h>

int main() {
    int D, R, L, P, G;
    scanf("%d %d %d %d %d", &D, &R, &L, &P, &G);

    int carroAutonomia = L * 10;
    double distanciaEntrePostos = (double)D / (P + 1);
    double distanciaRestante = D - carroAutonomia;
    int postosUltrapassados = carroAutonomia / distanciaEntrePostos;
    double gastoAbastecimento = (distanciaRestante / 10) * G;

    if (carroAutonomia >= D) {
        printf("Pode viajar.\n");
        printf("R$: %d\n", R);
    } else {
        if (gastoAbastecimento > R || distanciaEntrePostos > carroAutonomia) {
            printf("Nao pode viajar.\n");
        } else {
            printf("Pode viajar.\n");
            printf("R$: %d\n", R - (int)gastoAbastecimento);
        }
    }

    return 0;
}

