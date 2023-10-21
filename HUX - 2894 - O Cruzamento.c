#include <stdio.h>
#include <string.h>
    int main()
    {
        int hp_levi, x, inim = 0, hp_m = 100;
        scanf("%d %d", &hp_levi, &x);
        char atk[20], teste[4] = "nuca", teste2[6] = "cabeca";
        for (int i = 0; i < x; i++)
        {
            scanf(" %s", &atk);
            int y =  strncmp(atk, teste, 4); 
            int z =  strncmp(atk, teste2, 6);
            inim += 1;
            hp_m = 101;
            if(hp_levi > 0){
                if(atk[0] == 'n' && y == 0){ //atk na NUCA;
                    inim -= 1;
                }
                else if(atk[0] == 'N' && y == 0){ //atk na NUCA;
                    inim -= 1;
                }
                else if(atk[0] == 'c' && z ==  0){
                    hp_m /= 2;
                    if(hp_m <= 0){
                        inim -= 1;
                    }
                    hp_levi -= 30;
                }
                else if(atk[0] == 'C' && z ==  0){
                    hp_m /= 2;
                    if(hp_m <= 0){
                        inim -= 1;
                    }
                    hp_levi -= 30;
                }
                else{
                    hp_levi -= 50;
                }
            } // hp > 0
        }
        if(inim != 0 && hp_levi > 0) printf("Levi sobreviveu com %d de HP e sobraram %d inimigos\n", hp_levi, inim);
        else if(inim <= 0 && hp_levi > 0) printf("Levi sobreviveu com %d de HP e nao sobraram inimigos\n", hp_levi);
        else if(hp_levi <= 0) printf("Infelizmente, o Levi nao sobreviveu...\n");
        
    }