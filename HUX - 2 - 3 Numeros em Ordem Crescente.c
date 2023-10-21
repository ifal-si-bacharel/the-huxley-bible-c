#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int l[] = {x, y, z};
    int n = sizeof(l)/sizeof(l[0]);
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (l[j] > l[j+1]) {
                temp = l[j];
                l[j] = l[j+1];
                l[j+1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", l[i]);
    }
    return 0;
}
