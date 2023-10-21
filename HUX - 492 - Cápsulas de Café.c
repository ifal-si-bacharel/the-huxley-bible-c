#include <stdio.h>


void verificar (int aux, int total_capsulas, int total_xicaras)
{

    if (aux < 7)
    {
        int quantidade, quantidade_p = 0, quantidade_g = 0;

        char tamanho;

        scanf ("%d\n%c", &quantidade, &tamanho);

        if (tamanho == 'P' || tamanho == 'p')
        {
            quantidade_p = quantidade_p + quantidade;
        }
        else if (tamanho == 'G' || tamanho == 'g')
        {
            quantidade_g = quantidade_g + quantidade;

        }

        total_capsulas = total_capsulas + quantidade_p * 10 + quantidade_g * 16;

        total_xicaras = (total_capsulas * 2) / 7;

        verificar (aux + 1, total_capsulas, total_xicaras);
    }
    else 
    {
        printf ("%d\n%d", total_capsulas, total_xicaras);
    }

}
int main ()
{
    verificar (0, 0, 0);
    return 0;
}