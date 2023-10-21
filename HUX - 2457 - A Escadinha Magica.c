#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= x; y++) {
            if (y == x) {
                printf("%d\n", y);
            } else {
                printf("%d ", y);
            }
        }
    }
    return 0;
}
