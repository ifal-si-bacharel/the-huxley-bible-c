#include <stdio.h>
#include <math.h>

int diferenca_de_quadrado (int n)
{
    int metade, outra_metade;
    outra_metade = pow ((n / 2), 2); 
    metade = pow ((n / 2) + 1, 2);
    printf ("%d - %d\n", metade, outra_metade);

}
void verificar ()
{
    int n;
    scanf ("%d", &n);
    if (n == 0)
    {
        return;
    }
    if (n % 2 == 0)
    {
        return;
    }
    else 
    {
        diferenca_de_quadrado (n);
    }
    verificar ();
}
int main ()
{
    verificar ();

    return 0;
}

