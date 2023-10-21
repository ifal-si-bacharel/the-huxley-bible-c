#include <stdio.h>

float CalculaHospedagem(int dias, char suite[128]){
    float conta;
    if(strcmp(suite,"individual")== 0 || strcmp(suite,"Individual")== 0 ){
        conta= 125*dias;
    }
    else if(strcmp(suite,"su�te dupla") == 0 || strcmp(suite,"Su�te Dupla") == 0 || 
    strcmp(suite,"Su�te dupla") == 0 || strcmp(suite,"su�te Dupla") == 0 || strcmp(suite,"SU�TE DUPLA") == 0 ){
        conta= 140*dias;
    }
    else if(strcmp(suite,"su�te tripla") == 0 || strcmp(suite,"Su�te Tripla") == 0 || 
    strcmp(suite,"Su�te tripla") == 0 || strcmp(suite,"su�te Tripla") == 0 || strcmp(suite,"SU�TE TRIPLA") == 0){
        conta= 180*dias;
    }
    if(dias>=3){
        conta *=0.85;
    }
return conta;}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int dias;
    float resultado;
    char suite[128];
    
    gets(suite);
    scanf("%i", &dias);
    
    resultado = CalculaHospedagem(dias, suite);
    printf("%.2f", resultado);
}
