#include <stdio.h>
#include <math.h>

int main ()
{
    int altura_1, altura_2, altura_3, altura_4, altura_5;
    int contador = 1;

    scanf ("%d %d %d %d %d", &altura_1, &altura_2, &altura_3, &altura_4, &altura_5);

    if ((abs(altura_1 - altura_2) == 1) || (abs(altura_1 - altura_3) == 1) || (abs(altura_1 - altura_4) == 1) || ((abs(altura_1 - altura_5) == 1) || (abs(altura_2 - altura_3) == 1) || (abs(altura_2 - altura_4) == 1) || (abs(altura_2 - altura_5) == 1) || (abs(altura_3 - altura_4) == 1) || (abs(altura_3 - altura_5) == 1) || (abs(altura_4 - altura_5) == 1)));
    {
        contador++;
    }

    printf ("%d\n", contador);


    return 0;
}