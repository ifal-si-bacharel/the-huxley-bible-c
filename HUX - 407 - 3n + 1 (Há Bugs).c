#include <stdio.h>

void alcance (int a, int b, int n, int maior)
{
    int res;
    if (n <= b)
    {
        if (n == 1)
        {
            res = 1;
        }
        else 
        {
            res = verificar (n, 0);
        }
        

        if (res > maior)
        {
            maior = res;
        }
        
        n += 1;

        alcance (a, b, n, maior);

    }
    else 
    {
        printf ("%d %d %d", a, b, maior);

    }
}



int verificar (int n, int contador)
{
   
    if (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            contador ++;

        }
        else
        {
            n = n * 3 + 1;
            contador ++;

        }


        return verificar (n, contador);
    }
    else
    {
        return contador;
    }
}

int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }


    alcance (a, b, a, -1);

    return 0;
}