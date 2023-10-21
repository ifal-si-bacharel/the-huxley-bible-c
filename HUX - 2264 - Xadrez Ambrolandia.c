// Xadrez de Ambrolândia
#include <stdio.h>
      int d2(int n, int i, int j, int cont, int matriz[][n]){
        if(i >= 0 && j < n){
                if(matriz[i][j] == 0){
                    ++cont;
                    d2(n, --i, ++j, cont, matriz);
                }
                else return cont;
            }
            else return cont;
        }

      int d1(int n, int i, int j, int cont, int matriz[][n]){
        if(i < n && j >= 0){
                if(matriz[i][j] == 0){
                    ++cont;
                    d1(n, ++i, --j, cont, matriz);
                }
                else return cont;
            }
            else return cont;
        }

      int diag_baixo(int n, int i, int j, int cont, int matriz[][n]){
        if(i < n && j < n){
                if(matriz[i][j] == 0){
                    ++cont;
                    diag_baixo(n, ++i, ++j, cont, matriz);
                }
                else return cont;
            }
            else return cont;
        }
      
      int diag_cima(int n, int i, int j, int cont, int matriz[][n]){
        if(i >= 0 && j >= 0){
                if(matriz[i][j] == 0){
                    ++cont;
                    diag_cima(n, --i, --j, cont, matriz);
                }
                else return cont;
            }
            else return cont;
        }

      int baixo(int n, int i, int j, int cont, int matriz[][n]){
        if(i >= 0){
            if(matriz[i][j] == 0){
                ++cont;
                baixo(n, --i, j, cont, matriz);
            }
            else return cont;
        }
        else return cont;
    }

    int cima(int n, int i, int j, int cont, int matriz[][n]){
        if(i < n){
            if(matriz[i][j] == 0){
                ++cont;
                cima(n, ++i, j, cont, matriz);
            }
            else return cont;
        }
        else return cont;
    }

    int esquerda(int n, int i, int j, int cont, int matriz[][n]){
        if(j >= 0){
            if(matriz[i][j] == 0){
                ++cont;
                esquerda(n, i, --j, cont, matriz);
            }
            else return cont;
        }
        else return cont;
    }

    int direita(int n, int i, int j, int cont, int matriz[][n]){
        if(j < n){
            if(matriz[i][j] == 0){
                ++cont;
                direita(n, i, ++j, cont, matriz);
            }
            else return cont;
        }
        else return cont;
    }

    int input(int n, int i, int j, int matriz[][n]){
        if(i < n){
            if(j < n){
                scanf("%d", &matriz[i][j]);
                input(n, i, ++j, matriz);
            }
            else input(n, ++i, 0, matriz);
        }
        else return matriz[n][n];
    }

    int main(){
        int n; scanf("%d", &n); //Recebe o tamanho da matriz;
        int matriz[n][n];
        input(n, 0, 0, matriz); //Função de input;
        int cont, cont1 = 0;;
        for(int i = 0; i < n; i++){
            cont = 0;
            for(int j = 0; j < n; j++){
                if(matriz[i][j] == 0){
                cont = direita(n, i, j, 0, matriz) - 1; // ++j;
                cont += esquerda(n, i, j, 0, matriz) - 1;
                cont += cima(n, i, j, 0, matriz) - 1;
                cont += baixo(n, i, j, 0, matriz) - 1;
                cont += diag_cima(n, i, j, 0, matriz) - 1;
                cont += diag_baixo(n, i, j, 0, matriz) - 1;
                cont += d1(n, i, j, 0, matriz) - 1; // Diagonal inferior esquerda.
                cont += d2(n, i, j, 0, matriz) - 1; // Diagonal superior direita.
                }
                if(cont >= cont1) cont1 = cont;
                cont = 0;
            }
        }
        printf("%d\n", cont1);
    }
