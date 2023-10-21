#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info{
    int id, lvl, hp, atk, def;
    char nome[20];
    };

int main(){
    int i=0, x;

    scanf("%d", &x);
    getchar();
    struct info chr[x];

    for(i=0; i<x; i++){
      fgets(chr[i].nome, 20, stdin);
      scanf("%d", &chr[i].id);
      scanf("%d", &chr[i].lvl);
      scanf("%d", &chr[i].hp);
      scanf("%d", &chr[i].atk);
      scanf("%d", &chr[i].def);
      getchar();
      }
    
    for(i=0; i<x; i++){
      printf("Nome: %s", chr[i].nome);
      printf("ID: %d\nLevel: %d\nVida: %d\nAtaque: %d\nDefesa: %d\n", chr[i].id, chr[i].lvl, chr[i].hp, chr[i].atk, chr[i].def);
      }
      
return 0;}
