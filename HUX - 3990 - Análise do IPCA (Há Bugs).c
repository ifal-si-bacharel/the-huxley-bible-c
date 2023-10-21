#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char linha[50];
    double menor = 999.0, maior = -999.0, soma = 0.0;
    char mes_menor[8], mes_maior[8];
    int ano_menor, ano_maior;
    int count = 0;

    while (1) {
        fgets(linha, sizeof(linha), stdin);

        if (linha[0] == '*') {
            break;
        }

        char mes[3];
        int ano;
        double ipca;

        sscanf(linha, "%d-%2s %lf", &ano, mes, &ipca);

        if (ipca < menor) {
            menor = ipca;
            strcpy(mes_menor, mes);
            ano_menor = ano;
        }

        if (ipca > maior) {
            maior = ipca;
            strcpy(mes_maior, mes);
            ano_maior = ano;
        }

        soma += ipca;
        count++;
    }

    printf("Menor: %.2lf (%s-%d)\n", menor, mes_menor, ano_menor);
    printf("Maior: %.2lf (%s-%d)\n", maior, mes_maior, ano_maior);
    printf("Media: %.2lf\n", soma / count);

    return 0;
}


/**
x = dataMaior = dataMenor= None
dados = []
maior = soma = 0
menor = 100
while x != '*':
  x = input()
  if x != '*': dados.append(x)
for v in range(len(dados)): 
  dados[v] = dados[v].replace(",",".")
  dados[v] = dados[v].split()
  if float(dados[v][1]) > maior: 
    maior = float(dados[v][1])
    dataMaior = dados[v][0]
  if float(dados[v][1]) < menor: 
    menor = float(dados[v][1])
    dataMenor = dados[v][0]
  soma += float(dados[v][1])
media = soma/len(dados)
print(f'Menor: {menor:,.2f} ({dataMenor[-2::1]}-{dataMenor[0:4:1]})\nMaior: {maior:,.2f} ({dataMaior[-2::1]}-{dataMaior[0:4:1]})\nMedia: {media:,.2f}')
*/
