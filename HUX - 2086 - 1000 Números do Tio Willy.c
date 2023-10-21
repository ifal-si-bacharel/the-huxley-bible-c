#include <stdio.h>

int main(){
    int array[1000] = {0}, n, cont;
    while(array[0] != -1){
        scanf("%d", &array[0]);
        if(array[0] == -1) break;
        else{
            cont = 0;
            for (int i = 1; i < 1000; i++) scanf("%d", &array[i]);
            scanf("%d", &n);
            for (int i = 0; i < 1000; i++) if(n == array[i]) ++cont;
            printf("%d appeared %d times\n", n, cont);
        }            
    }
}