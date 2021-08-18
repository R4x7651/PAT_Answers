#include "cstdio"

int main() {
    int poly[1010] = {0}, n, temp, count = 0;

    if (scanf("%d %d", &temp, &n) == 1);
    if (n == 0) printf("0 0");
    else {
        poly[n - 1] = temp * n;
        count = n;
        while (scanf("%d %d", &temp, &n) != EOF) {
            poly[n - 1] = temp * n;
        }
        for (int i = 1000; i >= 0; i--) {
            if (poly[i] != 0) {
                if (i != count - 1) printf(" ");
                printf("%d %d", poly[i], i);
            }
        }
    }
    return 0;
}