#include <stdio.h>

int main() {
    int n;

    
    scanf("%d", &n);

    
    for (int x = 1; x <= 2 * n; x++) {
        if (x % 2 != 0) {
            printf("%d\n", x);
        }
    }

    return 0;
}

