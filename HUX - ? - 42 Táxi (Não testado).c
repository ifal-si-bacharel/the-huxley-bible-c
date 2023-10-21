#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primo(int n) {
    bool cond = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cond = false;
            break;
        }
    }
    return cond;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float l[2];
        scanf("%f %f", &l[0], &l[1]);
        if (primo((int)(l[0] * l[1]))) {
            printf("%.2f\n", l[0] * l[1] - l[0] * l[1] * 42 / 100);
        } else {
            printf("%.2f\n", l[0] * l[1]);
        }
    }
    return 0;
}
