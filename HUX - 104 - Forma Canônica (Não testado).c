#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main(){
        int n, cont = 0; scanf("%d", &n);
        char string[500];
        for (int i = 0; i < n; i++)
        {
            scanf(" %s", &string);
            int x = strlen(string);
            char varre[x], a = 'a';
            int y = 0;
            varre[y] = a;
            printf("%c", varre[y]);
            for (int j = 1; j < x; j++)
            {
                y = j;
                while (y > 0)
                {
                    if(string[j] == string[y - 1]){
                        varre[j] = varre[y - 1];
                        // printf("\n%d\n", y);
                        printf("%c", varre[y - 1]);
                        cont = 0;
                        break;
                    }
                    else cont = 1;
                    y -= 1;
                }
                if(cont == 1){
                    ++a;
                    varre[j] = a;
                    printf("%c", varre[j]);
                }
            }
            printf("\n");
        }
    }
