#include <stdio.h>
#include <math.h>

int main ()
{
    int classe_pedro1, classe_pedro2, classe_pedro3; 
    int contador_pedro = 0;
    int classe_tulio1, classe_tulio2, classe_tulio3;
    int contador_tulio = 0;
    double ataque_pedro1, vida_pedro1, ataque_pedro2, vida_pedro2, ataque_pedro3, vida_pedro3;
    double ataque_tulio1, vida_tulio1, ataque_tulio2, vida_tulio2, ataque_tulio3, vida_tulio3;


    scanf ("%d %lf %lf\n", &classe_pedro1, &ataque_pedro1, &vida_pedro1);
    scanf ("%d %lf %lf\n", &classe_pedro2, &ataque_pedro2, &vida_pedro2);
    scanf ("%d %lf %lf\n", &classe_pedro3, &ataque_pedro3, &vida_pedro3);
    scanf ("%d %lf %lf\n", &classe_tulio1, &ataque_tulio1, &vida_tulio1);
    scanf ("%d %lf %lf\n", &classe_tulio2, &ataque_tulio2, &vida_tulio2);
    scanf ("%d %lf %lf", &classe_tulio3, &ataque_tulio3, &vida_tulio3);

    if (classe_pedro1 == 1 && classe_tulio1 == 3)  
    {
        vida_pedro1 =  (vida_pedro1 * 1.30);
    }
    else if (classe_pedro1 == 3 && classe_tulio1 == 2)
    {
        ataque_pedro1 =  (ataque_pedro1 * 1.25);
    }
    else if (classe_pedro1 == 2 && classe_tulio1 == 1)
    {
        vida_pedro1 =  (vida_pedro1 * 1.15);
        ataque_pedro1 = (ataque_pedro1 * 1.15);
    }
    else if (classe_pedro1 == 3 && classe_tulio1 == 1)
    {
        vida_tulio1 = (vida_tulio1 * 1.30);
    }
    else if (classe_pedro1 == 2 && classe_tulio1 == 3)
    {
        ataque_tulio1 = (ataque_tulio1 * 1.25);
    }
    else if (classe_pedro1 == 1 && classe_tulio1 == 2)
    {
        vida_tulio1 = (vida_tulio1 * 1.15);
        ataque_tulio1 = (ataque_tulio1 * 1.15);
    }

    //----------------------------------------------------------------//
    if (classe_pedro2 == 1 && classe_tulio2 == 3)  
    {
        vida_pedro2 = (vida_pedro2 * 1.30);
    }
    else if (classe_pedro2 == 3 && classe_tulio2 == 2)
    {
        ataque_pedro2 = (ataque_pedro2 * 1.25);
    }
    else if (classe_pedro2 == 2 && classe_tulio2 == 1)
    {
        vida_pedro2 = (vida_pedro2 * 1.15);
        ataque_pedro2 = (ataque_pedro2 * 1.15);
    }
    else if (classe_pedro2 == 3 && classe_tulio2 == 1)
    {
        vida_tulio2 = (vida_tulio2 * 1.30);
    }
    else if (classe_pedro2 == 2 && classe_tulio2 == 3)
    {
        ataque_tulio2 = (ataque_tulio2 * 1.25);
    }
    else if (classe_pedro2 == 1 && classe_tulio2 == 2)
    {
        vida_tulio2 = (vida_tulio2 * 1.15);
        ataque_tulio2 = (ataque_tulio2 * 1.15);
    }

    //----------------------------------------------------------------//

    if (classe_pedro3 == 1 && classe_tulio3 == 3)  
    {
        vida_pedro3 = vida_pedro3 * 1.30;
    }
    else if (classe_pedro3 == 3 && classe_tulio3 == 2)
    {
        ataque_pedro3 = ataque_pedro3 * 1.25;
    }
    else if (classe_pedro3 == 2 && classe_tulio3 == 1)
    {
        vida_pedro3 = vida_pedro3 * 1.15;
        ataque_pedro3 = ataque_pedro3 * 1.15;
    }
    else if (classe_pedro3 == 3 && classe_tulio3 == 1)
    {
        vida_tulio3 = vida_tulio3 * 1.30;
    }
    else if (classe_pedro3 == 2 && classe_tulio3 == 3)
    {
        ataque_tulio3 = ataque_tulio3 * 1.25;
    }
    else if (classe_pedro3 == 1 && classe_tulio3 == 2)
    {
        vida_tulio3 =  vida_tulio3 * 1.15;
        ataque_tulio3 = ataque_tulio3 * 1.15;
    }

    //--------------------------------------------------------------------//

    // RODADA 1//

    if (vida_pedro1 <= vida_tulio1)
    {
        vida_tulio1 = vida_tulio1 - ataque_pedro1;

        if (vida_tulio1 <= 0)
        {
            printf ("Rodada1: Pedro\n");
            contador_pedro ++;
        }
        else 
        {
            vida_pedro1 = vida_pedro1 - ataque_tulio1;

            if (vida_pedro1 <= 0)
            {
                printf ("Rodada1: Tulio\n");
                contador_tulio ++; 
            }
            else if (vida_pedro1 > 0 && vida_tulio1 > 0)
            {
                if (vida_pedro1 > vida_tulio1)
                {
                    printf ("Rodada1: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio1 > vida_pedro1)
                {
                    printf ("Rodada1: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro1 == vida_tulio1)
                {
                    if (ataque_pedro1 > ataque_tulio1)
                    {
                        printf ("Rodada1: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio1 > ataque_pedro1)
                    {
                        printf ("Rodada1: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }

    }
    else if (vida_tulio1 < vida_pedro1)
    {
        vida_pedro1 = vida_pedro1 - ataque_tulio1;

        if (vida_pedro1 <= 0)
        {
            printf ("Rodada1: Tulio\n");
            contador_tulio ++;
        }
        else 
        {
            vida_tulio1 = vida_tulio1 - ataque_pedro1;

            if (vida_tulio1 <= 0)
            {
                printf ("Rodada1: Pedro\n");
                contador_pedro ++; 
            }
            else if (vida_pedro1 > 0 && vida_tulio1 > 0)
            {
                if (vida_pedro1 > vida_tulio1)
                {
                    printf ("Rodada1: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio1 > vida_pedro1)
                {
                    printf ("Rodada1: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro1 == vida_tulio1)
                {
                    if (ataque_pedro1 > ataque_tulio1)
                    {
                        printf ("Rodada1: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio1 > ataque_pedro1)
                    {
                        printf ("Rodada1: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }
    }


    //--------------------------------------------------------//

    //Rodada 2//

    if (vida_pedro2 <= vida_tulio2)
    {
        vida_tulio2 = vida_tulio2 - ataque_pedro2;

        if (vida_tulio2 <= 0)
        {
            printf ("Rodada2: Pedro\n");
            contador_pedro ++;
        }
        else 
        {
            vida_pedro2 = vida_pedro2 - ataque_tulio2;

            if (vida_pedro2 <= 0)
            {
                printf ("Rodada2: Tulio\n");
                contador_tulio ++; 
            }
            else if (vida_pedro2 > 0 && vida_tulio2 > 0)
            {
                if (vida_pedro2 > vida_tulio2)
                {
                    printf ("Rodada2: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio2 > vida_pedro2)
                {
                    printf ("Rodada2: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro2 == vida_tulio2)
                {
                    if (ataque_pedro2 > ataque_tulio2)
                    {
                        printf ("Rodada2: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio2 > ataque_pedro2)
                    {
                        printf ("Rodada2: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }

    }
    else if (vida_tulio2 < vida_pedro2)
    {
        vida_pedro2 = vida_pedro2 - ataque_tulio2;

        if (vida_pedro2 <= 0)
        {
            printf ("Rodada2: Tulio\n");
            contador_tulio ++;
        }
        else 
        {
            vida_tulio2 = vida_tulio2 - ataque_pedro2;

            if (vida_tulio2 <= 0)
            {
                printf ("Rodada2: Pedro\n");
                contador_pedro ++; 
            }
            else if (vida_pedro2 > 0 && vida_tulio2 > 0)
            {
                if (vida_pedro2 > vida_tulio2)
                {
                    printf ("Rodada2: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio2 > vida_pedro2)
                {
                    printf ("Rodada2: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro2 == vida_tulio2)
                {
                    if (ataque_pedro2 > ataque_tulio2)
                    {
                        printf ("Rodada2: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio2 > ataque_pedro2)
                    {
                        printf ("Rodada2: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }
    }

// ----------------------------------------------------------------------------//

// Rodada 3 //

    if (vida_pedro3 <= vida_tulio3)
    {
        vida_tulio3 = vida_tulio3 - ataque_pedro3;

        if (vida_tulio3 <= 0)
        {
            printf ("Rodada3: Pedro\n");
            contador_pedro ++;
        }
        else 
        {
            vida_pedro3 = vida_pedro3 - ataque_tulio3;

            if (vida_pedro3 <= 0)
            {
                printf ("Rodada3: Tulio\n");
                contador_tulio ++; 
            }
            else if (vida_pedro3 > 0 && vida_tulio3 > 0)
            {
                if (vida_pedro3 > vida_tulio3)
                {
                    printf ("Rodada3: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio3 > vida_pedro3)
                {
                    printf ("Rodada3: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro3 == vida_tulio3)
                {
                    if (ataque_pedro3 > ataque_tulio3)
                    {
                        printf ("Rodada3: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio3 > ataque_pedro3)
                    {
                        printf ("Rodada3: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }

    }
    else if (vida_tulio3 < vida_pedro3)
    {
        vida_pedro3 = vida_pedro3 - ataque_tulio3;

        if (vida_pedro3 <= 0)
        {
            printf ("Rodada3: Tulio\n");
            contador_tulio ++;
        }
        else 
        {
            vida_tulio3 = vida_tulio3 - ataque_pedro3;

            if (vida_tulio3 <= 0)
            {
                printf ("Rodada3: Pedro\n");
                contador_pedro ++; 
            }
            else if (vida_pedro3 > 0 && vida_tulio3 > 0)
            {
                if (vida_pedro3 > vida_tulio3)
                {
                    printf ("Rodada3: Pedro\n");
                    contador_pedro ++;
                }
                else if (vida_tulio3 > vida_pedro3)
                {
                    printf ("Rodada3: Tulio\n");
                    contador_tulio ++;
                }
                else if (vida_pedro3 == vida_tulio3)
                {
                    if (ataque_pedro3 > ataque_tulio3)
                    {
                        printf ("Rodada3: Pedro\n");
                        contador_pedro ++;
                    }
                    else if (ataque_tulio3 > ataque_pedro3)
                    {
                        printf ("Rodada3: Tulio\n");
                        contador_tulio ++;
                    }
                }
            }
        }
    }

if (contador_pedro > contador_tulio)
{
    printf ("Pedro vitorioso\n");
}
else if (contador_tulio > contador_pedro)
{
    printf ("Tulio vitorioso\n");
}
   
    return 0;
}