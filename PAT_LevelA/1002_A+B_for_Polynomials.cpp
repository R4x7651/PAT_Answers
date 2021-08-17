#include "cstdio"

const int MAX = 1010;

int main() {
    double poly[MAX] = {0}, temp;
    int n, exp, count = 0;

    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; i++) {
        if (scanf("%d %lf", &exp, &temp) == 1);
        poly[exp] += temp;
    }
    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; i++) {
        if (scanf("%d %lf", &exp, &temp) == 1);
        poly[exp] += temp;
    }

    for (int i = 0; i < MAX; i++) {
        if (poly[i] != 0) count++;
    }

    printf("%d", count);
    for (int i = MAX - 1; i >= 0; i--) {
        if (poly[i] != 0) {
            printf(" %d %.1lf", i, poly[i]);
        }
    }
    return 0;
}
