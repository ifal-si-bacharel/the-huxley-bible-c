#include <stdio.h>

 void soma1(int n, double s, int cont, int c, int b, int primo, int z, int cont1, int y);
 void soma2(int n, double s, int cont, int c, int b, int primo, int z, int cont1, int y);

    void pm(int n, double s, int cont, int c, int b, int primo, int z, int cont1, int y)
    {
        if (z < b)
        {
            int res;
            res = b % z;
            if (res == 0)
            {
                ++cont1;
            }
            pm(n, s, cont, c, b, primo, ++z, cont1, y);
        }
        else 
        {
            if (cont1 == 0)
            {
                soma2(n, s, cont, c, b, primo, z, cont1, y);
            }
            else pm(n, s, cont, c, ++b, primo, 2, cont1, y);
        }
    }

    void soma2(int n, double s, int cont, int c, int b, int primo, int z, int cont1, int y)
    {
        if (cont < n)
        {
            s += b /c;
            ++y;
            soma1(n, s, ++cont, 2*c, 3*y, primo, z, cont1, y);
        }
        else printf("%.2lf\n", s);
    }

    void soma1(int n, double s, int cont, int c, int b, int primo, int z, int cont1, int y)
    {
        if (cont < n)
        {
            s += c/b;
            pm(n, s, ++cont, 2*c, 3, primo, z, 0, y);
        }
        else printf("%.2lf\n", s);
    }

    int main ()
    {
        int n;
        scanf("%d", &n);
        soma1(n, 0, 0, 1, 1, 2, 1, 0, 1);
        return 0;
    }
