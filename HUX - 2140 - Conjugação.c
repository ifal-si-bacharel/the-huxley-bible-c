#include <stdio.h>
#include <string.h>

int main() {
    char verbo[50];
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strcspn(verbo, "\n")] = '\0'; 

    int len = strlen(verbo);
    verbo[len - 1] = '\0'; 

    printf("%s %sndo\n", verbo, verbo);

    return 0;
}

