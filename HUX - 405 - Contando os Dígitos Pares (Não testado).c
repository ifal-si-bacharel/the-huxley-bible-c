#include <stdio.h>

int calcular (int n, int total)
{
    if (n == 0)
    {
        return total;
    }
    else 
    {
        int aux = n % 10;

        if (aux % 2 == 0)
        {
            total++;
        }

        n = n / 10;

        return (calcular (n, total));
    }

}

int main ()
{
    int n;
    scanf ("%d", &n);1

    if (n == 0)
    {
        printf ("1\n");
    }
    else
    {
        printf ("%d\n", calcular(n, 0));
    }

    return 0;
}