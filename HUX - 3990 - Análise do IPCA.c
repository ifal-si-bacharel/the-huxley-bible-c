#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char x[100];
  char *dataMaior = NULL, *dataMenor = NULL;
  char **dados = NULL;
  float maior = 0, menor = 100, soma = 0, media = 0;
  int i = 0, j = 0, n = 0;

  dados = (char**) malloc(sizeof(char*));

  while (strcmp(x, "*") != 0) {
    fgets(x, 100, stdin);
    x[strcspn(x, "\n")] = 0;
    if (strcmp(x, "*") != 0) {
      dados = (char**) realloc(dados, (i+1)*sizeof(char*));
      dados[i] = (char*) malloc((strlen(x)+1)*sizeof(char));
      strcpy(dados[i], x);
      i++;
    }
  }

  n = i;

  for (i = 0; i < n; i++) {
    char *token = strtok(dados[i], " ");
    j = 0;
    while (token != NULL) {
      if (j == 0) {
        if (dataMaior == NULL || strcmp(token, dataMaior) > 0) {
          dataMaior = token;
        }
        if (dataMenor == NULL || strcmp(token, dataMenor) < 0) {
          dataMenor = token;
        }
      } else if (j == 1) {
        float valor = atof(token);
        if (valor > maior) {
          maior = valor;
        }
        if (valor < menor) {
          menor = valor;
        }
        soma += valor;
      }
      token = strtok(NULL, " ");
      j++;
    }
  }

  media = soma/n;

  printf("Menor: %.2f (%c%c-%c%c%c%c)\nMaior: %.2f (%c%c-%c%c%c%c)\nMedia: %.2f\n", 
    menor, dataMenor[3], dataMenor[4], dataMenor[0], dataMenor[1], dataMenor[6], dataMenor[7], 
    maior, dataMaior[3], dataMaior[4], dataMaior[0], dataMaior[1], dataMaior[6], dataMaior[7], 
    media);

  for (i = 0; i < n; i++) {
    free(dados[i]);
  }
  free(dados);

  return 0;
}
