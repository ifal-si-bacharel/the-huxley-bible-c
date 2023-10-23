#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Animal {
    char id[100];
    double peso;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Animal animais[n];

    for (int i = 0; i < n; i++) {
        char entrada[100];#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Animal {
    char id[100];
    double peso;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Animal animais[n];

    for (int i = 0; i < n; i++) {
        char entrada[100];
        scanf("%s %lf", animais[i].id, &animais[i].peso);
    }

    // Ordena os animais pelo peso em ordem crescente
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (animais[i].peso > animais[j].peso) {
                struct Animal temp = animais[i];
                animais[i] = animais[j];
                animais[j] = temp;
            }
        }
    }

    printf("Gordo: id: %s peso: %.2fKg\n", animais[n - 1].id, animais[n - 1].peso);
    printf("Magro: id: %s peso: %.2fKg\n", animais[0].id, animais[0].peso);

    return 0;
}

        scanf("%s %lf", animais[i].id, &animais[i].peso);
    }

    // Ordena os animais pelo peso em ordem crescente
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (animais[i].peso > animais[j].peso) {
                struct Animal temp = animais[i];
                animais[i] = animais[j];
                animais[j] = temp;
            }
        }
    }

    printf("Gordo: id: %s peso: %.2fKg\n", animais[n - 1].id, animais[n - 1].peso);
    printf("Magro: id: %s peso: %.2fKg\n", animais[0].id, animais[0].peso);

    return 0;
}

