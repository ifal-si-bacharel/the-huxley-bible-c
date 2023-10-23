#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("");
    scanf("%i",&x);
    printf("");
    scanf("%i",&y);
    if(x>y){
        printf("%i\n",y);
        printf("%i",x);
    }
    else {printf("%i\n",x);
        printf("%i\n",y);
    }
    
	return 0;
}
